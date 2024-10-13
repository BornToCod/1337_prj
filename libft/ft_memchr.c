#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = (const unsigned char *)s;
    unsigned char char_to_find = (unsigned char)c;
    size_t i = 0;
    while(i < n)
    {
        if( ptr[i] == char_to_find)
        {
            return (void *)(ptr + i);
        }
        i++;
    }
    return NULL;
}

int main()
{
     char str[] = "Example string";
    char *pch;

    // Test Case 1: Character 'p' is present in the string
    pch = (char *)ft_memchr(str, 'p', strlen(str));
    if (pch != NULL)
        printf("'p' found at position %ld.\n", pch - str); // Using zero-based index
    else
        printf("'p' not found.\n");

    // Test Case 2: Character 'z' is not present in the string
    pch = (char *)ft_memchr(str, 'z', strlen(str));
    if (pch != NULL)
        printf("'z' found at position %ld.\n", pch - str);
    else
        printf("'z' not found.\n");

    // Test Case 3: Character at the beginning of the string
    pch = (char *)ft_memchr(str, 'E', strlen(str));
    if (pch != NULL)
        printf("'E' found at position %ld.\n", pch - str);
    else
        printf("'E' not found.\n");

    // Test Case 4: Character at the end of the string
    pch = (char *)ft_memchr(str, 'g', strlen(str));
    if (pch != NULL)
        printf("'g' found at position %ld.\n", pch - str);
    else
        printf("'g' not found.\n");

    // Test Case 5: Search with size 0 (should not find anything)
    pch = (char *)ft_memchr(str, 'E', 0);
    if (pch != NULL)
        printf("'E' found at position %ld.\n", pch - str);
    else
        printf("'E' not found.\n");

    return 0;
}