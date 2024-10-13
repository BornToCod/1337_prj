#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_isdigit ( int c )
{
    if(c >= '0' && c <= '9')
    {
        return 1;
    }
    return 0;
}

int main()
{
   //char str[] = "       +99999999uhghgfu";
   if(ft_isdigit(53))
    printf("this is a digit");
   else
    printf("this is not a digit");
   return 0;
}