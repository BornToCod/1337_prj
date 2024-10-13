#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

 void ft_putendl(char const *s)
 {
    int i = 0;
    while (s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    write(1, "\n", 1);
    
 }
int main()
{
    ft_putendl("hello world");
   
    return 0;
}

