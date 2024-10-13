#include <stdio.h>

char *ft_strncat(char *dest, const char *src ,int n) {
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }

    while (src[j] != '\0' && j < n) {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}

int main() {
    char dest[50] = "Hello, ";
    char src[] = "world!";
    printf("Before strcat: %s\n", dest);
    ft_strncat(dest, src, 3);
    printf("After strcat: %s\n", dest);
    return 0;
}
