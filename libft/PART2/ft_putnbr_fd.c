#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c, int fd)
 {
    write(fd, &c, 1);
 }

 void ft_putnbr_fd(int n, int fd)
 {
    if(n < 0)
    {
        n = -n;
        ft_putchar('-', fd);
    }
    
    if(n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        //ft_putchar('0' + n % 10);
    }
    ft_putchar('0' + n % 10, fd);
 }
int main()
{
    ft_putnbr_fd(10000, 2);
   
    return 0;
}

