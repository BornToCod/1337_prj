#include <stdio.h>
#include <string.h>

void *memset(void *s, int c, size_t n)
{
    unsigned char a = (unsigned char)c;
    unsigned char *p = (unsigned char *) s;
    while(n--)
    {
        p[n] = a;
    }
    return (void *)s;
}


int main()
{
    // Test Case 1: Basic Case
    char buffer1[10];
    memset(buffer1, 'A', sizeof(buffer1));
    printf("Test Case 1: %s\n", buffer1); // Expected: "AAAAAAAAAA"
    
    // Test Case 2: Empty Case
    char buffer2[10] = "Hello";
    memset(buffer2, 'B', 0);
    printf("Test Case 2: %s\n", buffer2); // Expected: "Hello" (no change)
    
    // Test Case 3: Partial Case
    char buffer3[10] = "HelloWorld";
    memset(buffer3, 'C', 5);
    printf("Test Case 3: %s\n", buffer3); // Expected: "CCCCCWorld"

    // Test Case 4: Boundary Case
    char buffer4[10];
    memset(buffer4, 'D', 10);
    printf("Test Case 4: %s\n", buffer4); // Expected: "DDDDDDDDDD"

    // Test Case 5: Memory Alignment with an int array
    int buffer5[5] = {1, 2, 3, 4, 5};
    memset(buffer5, 0, sizeof(buffer5)); // Filling entire array with 0
    for (int i = 0; i < 5; i++)
    {
        printf("Test Case 5: buffer5[%d] = %d\n", i, buffer5[i]); // Expected: all 0s
    }

    // Test Case 6: Edge Case - Fill with 255 (unsigned char max value)
    char buffer6[5];
    memset(buffer6, 255, sizeof(buffer6)); // Filling array with 255
    for (int i = 0; i < 5; i++)
    {
        printf("Test Case 6: buffer6[%d] = %d\n", i, (unsigned char)buffer6[i]); // Expected: all 255s
    }

    // Test Case 7: Fill with null characters
    char buffer7[10] = "abcdefghij";
    memset(buffer7, '\0', sizeof(buffer7)); // Expected to fill with null characters
    printf("Test Case 7: buffer7 = \"%s\"\n", buffer7); // Expected: ""

    return 0;
}