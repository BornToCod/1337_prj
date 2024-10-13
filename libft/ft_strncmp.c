#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    while (s1[i] && s2[i] && i < n)
    {
        if (s1[i] != s2[i])
        {
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        }
        i++;
    }

    if (i == n)
    {
        return 0;
    }

    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main()
{
    char str1[] = "worla";
    char str2[] = "world";
    
    // Test cases
    printf("%d\n", ft_strncmp(str1, str2, 5)); // Compare first 5 characters: Expected output: negative value
    printf("%d\n", ft_strncmp("apple", "apple", 5));   // Compare first 5 characters: Expected output: 0
    printf("%d\n", ft_strncmp("apple", "apples", 5));  // Compare first 5 characters: Expected output: 0
    printf("%d\n", ft_strncmp("apples", "apple", 6));  // Compare first 6 characters: Expected output: positive value
    printf("%d\n", ft_strncmp("zebra", "apple", 5));   // Compare first 5 characters: Expected output: positive value
    printf("%d\n", ft_strncmp("apple", "zebra", 5));   // Compare first 5 characters: Expected output: negative value

    return 0;
}