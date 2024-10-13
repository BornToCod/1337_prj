#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 char * ft_strsub(char const *s, unsigned int
 start, size_t len)
 {
    char *p = malloc(len + 1);
    if(!p)
    {
        return NULL;
    }
    unsigned int i = 0;
    while(i < len)
    {
        p[i] = s[start];
        i++;
        start++;
    }
    p[i] = '\0';
    return p;
 }

int main()
{
    const char str1[] = "HELLO world";
    
    // Test Case 1: Extract substring starting at index 6 with length 5 ("world")
    char *result1 = ft_strsub(str1, 6, 5);
    if (result1)
    {
        printf("Test 1: %s (Expected: world)\n", result1);
        free(result1);  // Free the allocated memory
    }
    else
    {
        printf("Test 1: Memory allocation failed or invalid range.\n");
    }

    // Test Case 2: Invalid range (start + len exceeds string length)
    char *result2 = ft_strsub(str1, 10, 5);
    if (result2)
    {
        printf("Test 2: %s\n", result2);
        free(result2);
    }
    else
    {
        printf("Test 2: Memory allocation failed or invalid range (Expected: NULL).\n");
    }

    return 0;
}

