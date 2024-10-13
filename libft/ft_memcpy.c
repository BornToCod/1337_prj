#include <stdio.h>
#include <string.h>

void *memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    while(i < n)
    {
       ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return dest;
}

int main()
{
    // Test Case 1: Basic Case
    char src1[10] = "Hello";
    char dest1[10];
    memcpy(dest1, src1, sizeof(src1));
    printf("Test Case 1: \"%s\"\n", dest1); // Expected: "Hello"

    // Test Case 2: Empty Case
    char src2[10] = "World";
    char dest2[10] = "AAAAA";
    memcpy(dest2, src2, 0); // Copy 0 bytes
    printf("Test Case 2: \"%s\"\n", dest2); // Expected: "AAAAA" (no change)

    // Test Case 3: Partial Case
    char src3[10] = "Goodbye";
    char dest3[10] = "XXXXXXXX";
    memcpy(dest3, src3, 4); // Copy only 4 bytes
    printf("Test Case 3: \"%s\"\n", dest3); // Expected: "GoodXXXX"

    // Test Case 4: Boundary Case
    char src4[10] = "123456789";
    char dest4[10];
    memcpy(dest4, src4, 10); // Copy entire array including null terminator
    printf("Test Case 4: \"%s\"\n", dest4); // Expected: "123456789"

    // Test Case 5: Different Data Types
    int src5[5] = {1, 2, 3, 4, 5};
    int dest5[5] = {0};
    memcpy(dest5, src5, sizeof(src5)); // Copy entire int array
    for (int i = 0; i < 5; i++)
    {
        printf("Test Case 5: dest5[%d] = %d\n", i, dest5[i]); // Expected: 1, 2, 3, 4, 5
    }

    // Test Case 6: Overlapping Memory (not recommended for memcpy)
    char buffer6[20] = "HelloWorld";
    memcpy(buffer6 + 2, buffer6, 8); // Overlapping regions
    printf("Test Case 6: \"%s\"\n", buffer6); // Output might vary, undefined behavior

    return 0;
}