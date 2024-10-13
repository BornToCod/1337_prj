#include <stdio.h>
#include <string.h>

void *memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t i = 0;
    unsigned char chartofind = (unsigned char)c;
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    while (i < n)
    {
        d[i] = s[i];
        if (s[i] == chartofind)
        {
            return d + i + 1;
        }
        i++;
    }

    return NULL; 
}

int main()
{
    char src1[] = "Hello, World!";
    char dest1[20] = {0};

    // Test Case 1: Character found
    char *result1 = memccpy(dest1, src1, ',', sizeof(src1));
    printf("Test Case 1: dest1 = \"%s\", result1 = %p\n", dest1, (void *)result1); // Expected: "Hello," and a non-NULL pointer

    // Test Case 2: Character not found
    char dest2[20] = {0};
    char *result2 = memccpy(dest2, src1, 'x', sizeof(src1));
    printf("Test Case 2: dest2 = \"%s\", result2 = %p\n", dest2, (void *)result2); // Expected: "Hello, World!" and NULL

    // Test Case 3: Copy zero bytes
    char dest3[20] = {0};
    char *result3 = memccpy(dest3, src1, ',', 0);
    printf("Test Case 3: dest3 = \"%s\", result3 = %p\n", dest3, (void *)result3); // Expected: "" and NULL

    // Test Case 4: Partial copy where c is near the end
    char dest4[20] = {0};
    char *result4 = memccpy(dest4, src1, 'd', 10);
    printf("Test Case 4: dest4 = \"%s\", result4 = %p\n", dest4, (void *)result4); // Expected: "Hello, Wor" and NULL

    return 0;
}