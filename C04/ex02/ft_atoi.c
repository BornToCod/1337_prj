#include <stdio.h>
#include <stdbool.h>

int ft_atoi(char *str) {
    int i = 0;
    int nb = 0;
    int c = 0;
    bool n = false;

    while (str[i] == ' ' || str[i] == '\t') {
        i++;
    }

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-') {
            c++;
        }
        i++;
    }
    if (c % 2 != 0) {
        n = true;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }

    if (n) {
        nb = -nb;
    }

    return nb;
}

int main() {
    char dest[40] = "   +-----+2467Hell88o, ";
    int a = ft_atoi(dest);
    printf("The result is %d\n", a);

    return 0;
}
