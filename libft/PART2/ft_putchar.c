#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main()
{
    ft_putchar('k');
   
    return 0;
}

