#include <unistd.h>

// Function to write a single character
void ft_putchar(char c) {
    write(1, &c, 1);
}

// Function to print a combination
void ft_put_comb(int *comb, int n) {
    int i;
    for (i = 0; i < n; i++) {
        ft_putchar(comb[i] + '0');
    }
    if (comb[0] < (10 - n)) {
        write(1, ", ", 2);
    }
}

void ft_recursive(int *comb, int n, int index) {
    if (index == n) {
        ft_put_comb(comb, n);
        return;
    }

    if (index == 0)
        comb[index] = 0;
    else
        comb[index] = comb[index - 1] + 1;

    while (comb[index] < 10) {
        ft_recursive(comb, n, index + 1);
        comb[index]++;
    }
}

void ft_print_combn(int n) {
    int comb[10];  

    if (n > 0 && n < 10)
        ft_recursive(comb, n, 0);
}

int main(void) {
    ft_print_combn(4);  
    return (0);
}
