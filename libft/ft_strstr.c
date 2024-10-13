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


 char *ft_strstr(const char *haystack, const char *needle)
 {
    size_t len = ft_strlen(needle);
    int i = 0;
    if(len == 0)
    {
        return (char *)(haystack + i);
    }
    while(haystack[i])
    {
        size_t j = 0;
        while(haystack[i + j] == needle[j] && needle[j])
        {
            j++;
        }
        if(j == len)
            return (char *)(haystack + i);
        i++;
    }
        return NULL;    
 }

int main()
{
    char str1[] = "hello world";
    char str2[] = "world";
    char str3[] = "test";
    char str4[] = "";

    // Test Case 1: Match found
    printf("Test Case 1: %s\n", ft_strstr(str1, str2)); // Expected: "world"

    // Test Case 2: No match found
    printf("Test Case 2: %s\n", ft_strstr(str1, str3)); // Expected: "(null)"

    // Test Case 3: Empty needle
    printf("Test Case 3: %s\n", ft_strstr(str1, str4)); // Expected: "hello world"
    return 0;
   
}