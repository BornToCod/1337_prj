#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
    size_t i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}

int main()
{
    char src[] = "hello world";
    printf("the lenght of this string is %ld", ft_strlen(src));
    return 0;
}