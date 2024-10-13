#include <stdio.h>
#include <string.h>

void bzero(void *s, size_t n)
{
    while(n--)
    {
        ((char*)s)[n] = '\0';
    }
    
}
int main()
{
    // Test Case 1: Basic Case
    char buffer1[10] = "Hello";
    bzero(buffer1, sizeof(buffer1));
    printf("Test Case 1: \"%s\"\n", buffer1); // Expected: "" (all bytes are '\0')

    // Test Case 2: Empty Case
    char buffer2[10] = "World";
    bzero(buffer2, 0); // Zero out 0 bytes
    printf("Test Case 2: \"%s\"\n", buffer2); // Expected: "World" (no change)

    // Test Case 3: Partial Case
    char buffer3[10] = "Goodbye";
    bzero(buffer3 + 4, 3); // Zero out only part of the array
    printf("Test Case 3: \"%s\"\n", buffer3); // Expected: "Good\x00\x00\x00e"

    // Test Case 4: Boundary Case
    char buffer4[5] = "Test";
    bzero(buffer4, 5); // Zero out entire buffer including the null terminator
    printf("Test Case 4: \"%s\"\n", buffer4); // Expected: ""

    // Test Case 5: Memory Alignment with an int array
    int buffer5[5] = {1, 2, 3, 4, 5};
    bzero(buffer5, sizeof(buffer5)); // Zero out entire int array
    for (int i = 0; i < 5; i++)
    {
        printf("Test Case 5: buffer5[%d] = %d\n", i, buffer5[i]); // Expected: all 0s
    }

    // Test Case 6: Edge Case - Zeroing out a large block of memory
    char buffer6[1000];
    memset(buffer6, 'A', sizeof(buffer6)); // Fill with 'A's first
    bzero(buffer6, 1000); // Zero out the entire block
    int all_zero = 1;
    for (int i = 0; i < 1000; i++)
    {
        if (buffer6[i] != '\0')
        {
            all_zero = 0;
            break;
        }
    }
    printf("Test Case 6: All zeros: %s\n", all_zero ? "true" : "false"); // Expected: "true"

    return 0;
}