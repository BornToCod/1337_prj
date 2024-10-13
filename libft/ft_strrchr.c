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


 char *ft_strrchr(const char *s, int c)
{
    unsigned char tofind = (unsigned char)c;
    int i = ft_strlen(s);
    if (tofind == '\0')
        return (char *)(s + i);
    while(i > 0)
    {
        if(s[i] == tofind)
            return ((char *)s + i);
        i--;    
    }
    return NULL;
}


int main()
{
   char str[] = "hello world";
    
    // Test Case 1: Find last occurrence of 'l'
    printf("Test Case 1: Last 'l' found at: %p\n", ft_strrchr(str, 'l')); // Expected: Address of last 'l'

    // Test Case 2: Find last occurrence of 'o'
    printf("Test Case 2: Last 'o' found at: %p\n", ft_strrchr(str, 'o')); // Expected: Address of last 'o'

    // Test Case 3: Find last occurrence of 'z' (not present)
    printf("Test Case 3: Last 'z' found at: %p\n", ft_strrchr(str, 'z')); // Expected: NULL

    // Test Case 4: Find the null terminator
    printf("Test Case 4: Null terminator found at: %p\n", ft_strrchr(str, '\0')); // Expected: Address of '\0'

    return 0;
}