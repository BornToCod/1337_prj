// #include <unistd.h>
// #include <stdbool.h>

// void ft_putchar(char c) {
//     write(1, &c, 1);
// }

// int ft_strlen(char *str) {
//     int length = 0;
//     while (str[length]) {
//         length++;
//     }
//     return length;
// }

// bool is_valid_base(char *base) {
//     int len = ft_strlen(base);
//     if (len <= 1) {
//         return false;
//     }
//     for (int i = 0; i < len; i++) {
//         if (base[i] == '+' || base[i] == '-') {
//             return false;
//         }
//         for (int j = i + 1; j < len; j++) {
//             if (base[i] == base[j]) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// void ft_putnbr_base_recursive(int nbr, char *base, int base_len) {
//     if (nbr >= base_len) {
//         ft_putnbr_base_recursive(nbr / base_len, base, base_len);
//     }
//     ft_putchar(base[nbr % base_len]);
// }

// void ft_putnbr_base(int nbr, char *base) {
//     if (!is_valid_base(base)) {
//         return;
//     }
//     int base_len = ft_strlen(base);
//     if (nbr < 0) {
//         ft_putchar('-');
//         ft_putnbr_base_recursive(-nbr, base, base_len);
//     } else {
//         ft_putnbr_base_recursive(nbr, base, base_len);
//     }
// }

// int main() {
//     ft_putnbr_base(55, "0123456789");
//     ft_putchar('\n');
//     ft_putnbr_base(55, "01");
//     ft_putchar('\n');
//     ft_putnbr_base(55, "0123456789ABCDEF");
//     ft_putchar('\n');
//     ft_putnbr_base(55, "poneyvif");
//     ft_putchar('\n');
//     return 0;
// }

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

int ft_strlen(char *str) {
    int length = 0;
    while (str[length]) {
        length++;
    }
    return length;
}

int is_valid_base(char *base) {
    int len = ft_strlen(base);
    if (len <= 1) {
        return 0;
    }
    for (int i = 0; i < len; i++) {
        if (base[i] == '+' || base[i] == '-') {
            return 0;
        }
        for (int j = i + 1; j < len; j++) {
            if (base[i] == base[j]) {
                return 0;
            }
        }
    }
    return 1;
}

void ft_putnbr_base(int nbr, char *base) {
    if (!is_valid_base(base)) {
        return;
    }

    int base_len = ft_strlen(base);
    char buffer[33]; // Buffer to hold the digits
    int index = 0;

    // Handle zero case
    if (nbr == 0) {
        ft_putchar(base[0]);
        return;
    }

    // Handle negative number
    if (nbr < 0) {
        ft_putchar('-');
        nbr = -nbr;
    }

    // Convert the number to the given base
    while (nbr > 0) {
        buffer[index++] = base[nbr % base_len];
        nbr /= base_len;
    }

    // Print the digits in reverse order
    while (index > 0) {
        ft_putchar(buffer[--index]);
    }
}

int main() {
    ft_putnbr_base(55, "0123456789");   // Prints: 123456789
    ft_putchar('\n');
    ft_putnbr_base(-55, "01");          // Prints: -111010110111100110100010101
    ft_putchar('\n');
    ft_putnbr_base(55, "0123456789ABCDEF");   // Prints: FF
    ft_putchar('\n');
    ft_putnbr_base(55, "poneyvif");            // Prints: nvp
    ft_putchar('\n');
    return 0;
}