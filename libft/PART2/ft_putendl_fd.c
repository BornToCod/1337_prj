#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>



 void ft_putendl_fd(char const *s, int fd)
 {
    while (*s)
    {
        write(fd, s++, 1);
    }
    write(fd, "\n", 1);
    
 }
int main()
{
    ft_putendl_fd("hello", 2);
    return 0;
}


