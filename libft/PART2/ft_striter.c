#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_striter(char *s, void (*f)(char *))
{
    size_t i = 0;
    while(s[i])
    {
        f(s + i);
        i++;
    }
}

void ft_toupper (char *c)
{
    if(*c >= 97 && *c <= 122)
    {
        *c = *c - 32;
    }
}

int main()
{
 
    char str1[] = "hello";
    
    ft_striter(str1, ft_toupper);
    printf("%s\n", str1);
    
    return 0;
}
