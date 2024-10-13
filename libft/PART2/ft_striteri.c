#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int,
char *))
{
    size_t i = 0;
    while(s[i])
    {
        f(i, s + i);
        i++;
    }
}

void ft_toupper (unsigned int i, char *c)
{
    (void)i;
    if(*c >= 97 && *c <= 122)
    {
        *c = *c - 32;
    }
}

int main()
{
    size_t i = 0;
    char str1[] = "hello";
    ft_striteri(str1 + i, ft_toupper);
    printf("%s\n", str1);
    
    return 0;
}
