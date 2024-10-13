#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_isalpha ( int c )
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1;
    }
    return 0;
}

int main()
{
   //char str[] = "       +99999999uhghgfu";
   if(ft_isalpha('+'))
    printf("this is an alphabetical character");
   else
    printf("this is not an alphabetical character");
   return 0;
}