#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_isascii(int c)
{
    if((c >= 0 && c <= 127))
    {
        return 1;
    }
    return 0;
}

int main()
{
   //char str[] = "       +99999999uhghgfu";
   if(ft_isascii(200))
    printf("this is an ascii char");
   else
    printf("this is not an ascii char");
   return 0;
}