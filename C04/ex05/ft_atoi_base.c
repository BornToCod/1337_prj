#include <stdio.h>
#include <stdbool.h>

// Function to get the length of a string
int ft_strlen(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to check if a base is valid
bool is_valid_base(char *base) {
    int len = ft_strlen(base);
    if (len <= 1) {
        return false;
    }
    for (int i = 0; i < len; i++) {
        if (base[i] == '+' || base[i] == '-' || base[i] <= ' ') {
            return false;
        }
        for (int j = i + 1; j < len; j++) {
            if (base[i] == base[j]) {
                return false;
            }
        }
    }
    return true;
}

// Function to find the index of a character in the base string
int get_value(char c, char *base) {
    for (int i = 0; base[i] != '\0'; i++) {
        if (base[i] == c) {
            return i;
        }
    }
    return -1;
}

// Main function to convert the string to an integer in the given base
int ft_atoi_base(char *str, char *base) {
    if (!is_valid_base(base)) {
        return 0;
    }

    int base_len = ft_strlen(base);
    int i = 0;
    int num = 0;
    int sign = 1;

    // Skip whitespaces
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) {
        i++;
    }

    // Handle sign
    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            sign = -sign;
        }
        i++;
    }

    // Convert number
    int value;
    while ((value = get_value(str[i], base)) != -1) {
        num = num * base_len + value;
        i++;
    }

    return num * sign;
}

int main() {
    // printf("%d\n", ft_atoi_base("    --1A", "0123456789ABCDEF")); // Prints: -26
    // printf("%d\n", ft_atoi_base("1011", "01"));                  // Prints: 11
    // printf("%d\n", ft_atoi_base("7F", "0123456789ABCDEF"));      // Prints: 127
    printf("%d\n", ft_atoi_base("poney", "poneyvif"));           // Prints: 20174
    return 0;
}
