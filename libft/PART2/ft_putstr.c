#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char const *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        write(1, &s[i], 1);
        i++;
    }
    
}
int main()
{
    ft_putstr("hello");
   
    return 0;
}

