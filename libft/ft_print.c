#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_isprint ( int c )
{
    if(c >= 33 && c <= 126)
    {
        return 1;
    }
    return 0;
}

int main()
{
   //char str[] = "       +99999999uhghgfu";
   if(ft_isprint(36))
    printf("this is a printable char");
   else
    printf("this is not a printable char");
   return 0;
}