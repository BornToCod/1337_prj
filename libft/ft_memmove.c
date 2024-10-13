#include <stdio.h>
#include <string.h>


void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    if(d == s)
    {
        return d;
    }
    else if( d < s)
    {
        size_t i = 0;
        while( i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        while(n--)
        {
            d[n] = s[n];
        }
    }
   
    return dest;
}

int main()
{
    char buffer1[20] = "Hello, World!";
    char buffer2[20] = {0};

    // Test Case 1: Non-overlapping regions
    printf("Test Case 1: Non-overlapping regions\n");
    ft_memmove(buffer2, buffer1, 13);
    printf("buffer2 = \"%s\"\n", buffer2); // Expected: "Hello, World!"

    // Test Case 2: Overlapping regions, dest < src
    printf("\nTest Case 2: Overlapping regions, dest < src\n");
    ft_memmove(buffer1 + 7, buffer1, 6);
    printf("buffer1 = \"%s\"\n", buffer1); // Expected: "Hello, Hello!"

    // Test Case 3: Overlapping regions, dest > src
    printf("\nTest Case 3: Overlapping regions, dest > src\n");
    ft_memmove(buffer1, buffer1 + 7, 6);
    printf("buffer1 = \"%s\"\n", buffer1); // Expected: " Hello!"

    // Test Case 4: src and dest are the same
    printf("\nTest Case 4: src and dest are the same\n");
    ft_memmove(buffer2, buffer2, 13);
    printf("buffer2 = \"%s\"\n", buffer2); // Expected: "Hello, World!"

    // Test Case 5: Copy zero bytes
    printf("\nTest Case 5: Copy zero bytes\n");
    ft_memmove(buffer2, buffer1, 0);
    printf("buffer2 = \"%s\"\n", buffer2); // Expected: "Hello, World!"

    return 0;
}