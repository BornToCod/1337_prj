#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}

char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t i = 0;
    size_t len = ft_strlen(dest);
    while( src[i] && i < n)
    {
        dest[len++] = src[i++];
    }
    dest[len] = '\0';
    return dest;
}


int main()
{
    // Test Case 1: Normal concatenation within bounds
    char s1[] = "world";
    char s2[20] = "hello ";
    ft_strncat(s2, s1, 5); 
    printf("Test Case 1: The destination is \"%s\"\n", s2); // Expected: "hello world"

    // Test Case 2: Concatenate with n greater than the length of src
    char s3[] = "planet";
    char s4[20] = "hello ";
    ft_strncat(s4, s3, 10); 
    printf("Test Case 2: The destination is \"%s\"\n", s4); // Expected: "hello planet"

    // Test Case 3: Concatenate with n = 0
    char s5[] = "there";
    char s6[20] = "hi ";
    ft_strncat(s6, s5, 0); 
    printf("Test Case 3: The destination is \"%s\"\n", s6); // Expected: "hi "

    // Test Case 4: Concatenate with an empty src string
    char s7[] = "";
    char s8[20] = "hi ";
    ft_strncat(s8, s7, 5); 
    printf("Test Case 4: The destination is \"%s\"\n", s8); // Expected: "hi "

    // Test Case 5: Concatenate with an empty dest string
    char s9[20] = "";
    char s10[] = "world";
    ft_strncat(s9, s10, 3); 
    printf("Test Case 5: The destination is \"%s\"\n", s9); // Expected: "wor"

    return 0;
}