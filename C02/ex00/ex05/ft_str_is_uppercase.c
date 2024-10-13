#include <stdio.h>

int ft_str_is_uppercase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (( str[i] >= 65 && str[i] <= 90) ) {
            return 1;
        }
        i++;
    }
    return 0;
}

int main() {
    char sr[] = "jfdngldfjgl";
    int result = ft_str_is_uppercase(sr);
    printf("Result is: %d\n", result);
    return 0;
}
