#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strnequ(char const *s1, char const *s2,
 size_t n)
{
    size_t i = 0;
    while((s1[i] || s2[i]) && i < n)
    {
        if(s1[i] != s2[i])
            return 0;
        i++;
        
    }
    return 1;
}

int main()
{
    // Test Case 1: Identical strings, compare full length
    const char str1[] = "HELLO world";
    const char str2[] = "HELLO world";
    printf("Test 1: %d (Expected: 1)\n", ft_strnequ(str1, str2, 11)); // Should return 1 (equal)

    // Test Case 2: Identical first part, but different after `n`
    const char str3[] = "HELLO world";
    const char str4[] = "HELLO worlD";
    printf("Test 2: %d (Expected: 1)\n", ft_strnequ(str3, str4, 10)); // Should return 1 (first 10 chars are equal)

    // Test Case 3: Identical up to the first `n` characters
    const char str5[] = "HELLO";
    const char str6[] = "HELLO world";
    printf("Test 3: %d (Expected: 1)\n", ft_strnequ(str5, str6, 5)); // Should return 1 (first 5 chars are equal)

    // Test Case 4: Different strings
    const char str7[] = "HELLO";
    const char str8[] = "WORLD";
    printf("Test 4: %d (Expected: 0)\n", ft_strnequ(str7, str8, 5)); // Should return 0 (different strings)

    // Test Case 5: Compare 0 characters (always equal if 0 characters are compared)
    const char str9[] = "HELLO";
    const char str10[] = "WORLD";
    printf("Test 5: %d (Expected: 1)\n", ft_strnequ(str9, str10, 0)); // Should return 1 (comparing 0 characters)

    // Test Case 6: Empty strings comparison
    const char str11[] = "";
    const char str12[] = "";
    printf("Test 6: %d (Expected: 1)\n", ft_strnequ(str11, str12, 0)); // Should return 1 (both are empty)

    // Test Case 7: Empty vs non-empty string comparison
    const char str13[] = "HELLO";
    const char str14[] = "";
    printf("Test 7: %d (Expected: 0)\n", ft_strnequ(str13, str14, 5)); // Should return 0 (different strings)

    // Test Case 8: Non-empty vs empty string comparison
    printf("Test 8: %d (Expected: 0)\n", ft_strnequ(str14, str13, 5)); // Should return 0 (different strings)

    // Test Case 9: Identical strings, compare beyond the null terminator
    const char str15[] = "HELLO";
    const char str16[] = "HELLO";
    printf("Test 9: %d (Expected: 1)\n", ft_strnequ(str15, str16, 10)); // Should return 1 (even beyond null terminator)

    return 0;
}

