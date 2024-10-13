#include <stdio.h>

int ft_strcmp(char *s1, char *s2 , int n) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && i < n) {
        if (s1[i] != s2[i]) {
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        }
        i++;
    }
    // Handle the case where the strings are of different lengths
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main() {
    char a[] = "abdo";
    char b[] = "abdo";
    int result = ft_strcmp(a, b,2);
    printf("Comparison result: %d\n", result);
    
    char c[] = "abcd";
    char d[] = "abce";
    result = ft_strcmp(c, d,2);
    printf("Comparison result: %d\n", result);
    
    char e[] = "abc";
    char f[] = "abcd";
    result = ft_strcmp(e, f,2);
    printf("Comparison result: %d\n", result);
    
    char g[] = "abcd";
    char h[] = "abc";
    result = ft_strcmp(g, h,2);
    printf("Comparison result: %d\n", result);

    return 0;
}
