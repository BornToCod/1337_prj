#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_isalnum ( int c )
{
    if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
    {
        return 1;
    }
    return 0;
}

int main()
{
   //char str[] = "       +99999999uhghgfu";
   if(ft_isalnum(92))
    printf("this is a alphanumeric");
   else
    printf("this is not a alphanumeric");
   return 0;
}