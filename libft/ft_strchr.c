#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *ft_strchr(const char *s, int c)
{
    unsigned char tofind = (unsigned char)c;
    int i = 0;
    while(s[i])
    {
        if(s[i] == tofind)
            return ((char *)s + i);
        i++;    
    }
    if (tofind == '\0')
        return (char *)(s + i);
    return NULL;
}


int main()
{
   char dest1[20] = "hello ";
    
    // Test Case 1: Character 'e' is found in the string
    printf("Test Case 1: Address of 'e' is %p\n", ft_strchr(dest1, 'e')); // Expected: Address of 'e'

    // Test Case 2: Character 'z' is not found in the string
    printf("Test Case 2: Address of 'z' is %p\n", ft_strchr(dest1, 'z')); // Expected: (nil)

    // Test Case 3: Null terminator is searched in the string
    printf("Test Case 3: Address of '\\0' is %p\n", ft_strchr(dest1, '\0')); // Expected: Address of '\0' (end of string)

    return 0;
}