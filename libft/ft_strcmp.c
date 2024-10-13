#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    while(s1[i] && s2[i])
    {
        if(s1[i] != s2[i])
        {
            return (unsigned char)s1[i] - (unsigned char)s2[i];
        }
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int main()
{
    char str1[] = "worla";
    char str2[] = "world";
    printf("%d\n", ft_strcmp(str1, str2)); // Expected output: negative value

    // Additional test cases
    printf("%d\n", ft_strcmp("apple", "apple"));   // Expected output: 0
    printf("%d\n", ft_strcmp("apple", "apples"));  // Expected output: negative value
    printf("%d\n", ft_strcmp("apples", "apple"));  // Expected output: positive value
    printf("%d\n", ft_strcmp("zebra", "apple"));   // Expected output: positive value
    printf("%d\n", ft_strcmp("apple", "zebra"));   // Expected output: negative value

    return 0;
   
}