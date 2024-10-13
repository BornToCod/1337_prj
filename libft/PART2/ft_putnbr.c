#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
 {
    write(1, &c, 1);
 }

 void ft_putnbr(int n)
 {
    if(n < 0)
    {
        n = -n;
        ft_putchar('-');
    }
    
    if(n > 9)
    {
        ft_putnbr(n / 10);
        //ft_putchar('0' + n % 10);
    }
    ft_putchar('0' + n % 10);
 }
int main()
{
    ft_putnbr(10000);
   
    return 0;
}

