#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t needle_len = ft_strlen(needle);
    size_t i = 0;

    if (needle_len == 0)
    {
        return (char *)haystack;
    }

    while (haystack[i] && i < n)
    {
        size_t j = 0;
        while (i + j < n && haystack[i + j] == needle[j] && needle[j])
        {
            j++;
        }

        if (j == needle_len)
        {
            return (char *)(haystack + i);
        }

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
    printf("Test Case 1: %s\n", ft_strnstr(str1, str2, 11)); // Expected: "world"

    // Test Case 2: No match found
    printf("Test Case 2: %s\n", ft_strnstr(str1, str3, 5)); // Expected: "(null)"

    // Test Case 3: Empty needle
    printf("Test Case 3: %s\n", ft_strnstr(str1, str4, 5)); // Expected: "hello world"

    // Test Case 4: n is smaller than haystack length and match
    printf("Test Case 4: %s\n", ft_strnstr(str1, str2, 7)); // Expected: "(null)"

    // Test Case 5: n is zero
    printf("Test Case 5: %s\n", ft_strnstr(str1, str2, 0)); // Expected: "(null)"

    return 0;
   
}