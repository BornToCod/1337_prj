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

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t i = 0;
    while(src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while( i < n)
        dest[i++] = '\0';
    return dest;
}


int main()
{
    char src[] = "hello";
    char dest[10]; // Make sure the destination buffer is large enough

    // Test Case 1: Normal copy with n > strlen(src)
    ft_strncpy(dest, src, 8);
    printf("Test Case 1: \"%s\"\n", dest); // Expected: "hello" with additional null characters at the end

    // Test Case 2: Copy exact length of src
    ft_strncpy(dest, src, 5);
    printf("Test Case 2: \"%s\"\n", dest); // Expected: "hello"

    // Test Case 3: Copy with n < strlen(src)
    ft_strncpy(dest, src, 3);
    printf("Test Case 3: \"%s\"\n", dest); // Expected: "hel"

    // Test Case 4: Copy zero characters
    ft_strncpy(dest, src, 0);
    printf("Test Case 4: \"%s\"\n", dest); // Expected: ""

    // Test Case 5: Copy to empty destination with n > strlen(src)
    ft_strncpy(dest, "", 5);
    printf("Test Case 5: \"%s\"\n", dest); // Expected: "" (5 null characters)

    return 0;
}