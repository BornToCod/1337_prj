#include <unistd.h>

// Function to compare two strings
int ft_strcmp(char *s1, char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

// Function to swap two strings
void ft_swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

// Function to print a string
void ft_putstr(char *str) {
    while (*str) {
        write(1, str, 1);
        str++;
    }
}

// Function to print all arguments, one per line
void ft_print_params(int argc, char **argv) {
    int i;

    for (i = 1; i < argc; i++) {
        ft_putstr(argv[i]);
        write(1, "\n", 1);
    }
}

int main(int argc, char **argv) {
    int i, j;

    // Bubble sort to sort arguments
    for (i = 1; i < argc - 1; i++) {
        for (j = 1; j < argc - i; j++) {
            if (ft_strcmp(argv[j], argv[j + 1]) > 0) {
                ft_swap(&argv[j], &argv[j + 1]);
            }
        }
    }

    // Print sorted arguments
    ft_print_params(argc, argv);
    return 0;
}
