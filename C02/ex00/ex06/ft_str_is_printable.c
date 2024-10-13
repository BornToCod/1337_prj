#include <stdio.h>

int ft_str_is_printable(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (( str[i] >= 0 && str[i] <= 31) || str[i]==127 ) {
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {
    char sr[] = "";
    int result = ft_str_is_printable(sr);
    printf("Result is: %d\n", result);
    return 0;
}
