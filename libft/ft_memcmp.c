#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char * ptr1 = (const unsigned char *)s1;
    const unsigned char * ptr2 = (const unsigned char *)s2;
    size_t i = 0;
    while( i < n )
    {
        if(ptr1[i] != ptr2[i])
            return (ptr1[i] - ptr2[i]);
        i++;
    }
    return 0;
    
}

int main()
{
      char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hellp";
    char str4[] = "Hell";

    // Test Case 1: Identical strings
    printf("Test Case 1: %d\n", ft_memcmp(str1, str2, 5)); // Expected: 0

    // Test Case 2: Strings differ at the last character
    printf("Test Case 2: %d\n", ft_memcmp(str1, str3, 5)); // Expected: < 0

    // Test Case 3: Compare with a shorter string (substring)
    printf("Test Case 3: %d\n", ft_memcmp(str1, str4, 4)); // Expected: 0

    // Test Case 4: Different length, but `n` is smaller than the lengths
    printf("Test Case 4: %d\n", ft_memcmp(str1, str4, 5)); // Expected: > 0

    return 0;
}