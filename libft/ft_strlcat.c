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

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i = 0;
    size_t destlen = ft_strlen(dest);
    size_t srclen = ft_strlen(src);
    if(size <= destlen)
    {
        return srclen + size;
    }
    while(src[i] && (destlen + i) < (size - 1))
    {
        dest[destlen + i] = src[i];
        i++;
    }
    dest[destlen + i] = '\0';
    return (destlen + srclen);
}


int main()
{
    // Test Case 1: Normal concatenation within buffer size
    char dest1[20] = "hello ";
    const char src1[] = "world";
    size_t size1 = 20;
    size_t result1 = ft_strlcat(dest1, src1, size1);
    printf("Test Case 1: Result: %zu, dest: \"%s\"\n", result1, dest1); // Expected: Result: 11, dest: "hello world"

    // Test Case 2: Size less than the length of dest
    char dest2[20] = "hello ";
    const char src2[] = "world";
    size_t size2 = 5;
    size_t result2 = ft_strlcat(dest2, src2, size2);
    printf("Test Case 2: Result: %zu, dest: \"%s\"\n", result2, dest2); // Expected: Result: 10, dest: "hello "

    // Test Case 3: Size is exactly the size of dest
    char dest3[20] = "hello ";
    const char src3[] = "world";
    size_t size3 = 11;
    size_t result3 = ft_strlcat(dest3, src3, size3);
    printf("Test Case 3: Result: %zu, dest: \"%s\"\n", result3, dest3); // Expected: Result: 11, dest: "hello world"

    // Test Case 4: Size is larger than the buffer size
    char dest4[20] = "hello ";
    const char src4[] = "planet";
    size_t size4 = 15;
    size_t result4 = ft_strlcat(dest4, src4, size4);
    printf("Test Case 4: Result: %zu, dest: \"%s\"\n", result4, dest4); // Expected: Result: 13, dest: "hello planet"

    return 0;
}