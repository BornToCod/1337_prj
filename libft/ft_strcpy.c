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

char *ft_strcpy(char *dest, const char *src)
{
    size_t i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}


int main()
{
    char src[] = "hello world";
    char dest[20];
    printf("%s", ft_strcpy(dest, src));
    //printf("%s", p);
    return 0;
}