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

char *ft_strdup(const char *s)
{
    size_t len = ft_strlen(s);
    size_t i = 0;
    char *ptr = malloc(len + 1);
    if(!ptr)
    {
        return NULL;
    }
    while(s[i])
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}


int main()
{
    char src[] = "hello world";
    char *p = ft_strdup(src);
    printf("%s", p);
    free(p);
    //printf("%s", p);
    return 0;
}