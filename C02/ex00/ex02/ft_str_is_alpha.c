#include <stdio.h>

int ft_str_is_alpha(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))) {
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {
    char sr[] = "";

    int result = ft_str_is_alpha(sr);

    printf("Result is: %d\n", result);

    return 0;
}
