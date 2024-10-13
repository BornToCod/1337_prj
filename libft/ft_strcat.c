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

char *ft_strcat(char *dest, const char *src)
{
    size_t i = 0;
    size_t len = ft_strlen(dest);
    while( src[i])
    {
        dest[len++] = src[i++];
    }
    dest[len] = '\0';
    return dest;
}


int main()
{
    char s1[] = "world";
    char s2[20] = "hello ";
    ft_strcat(s2, s1);
    printf("the destination is %s", s2);

    return 0;
}