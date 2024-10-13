#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_atoi(const char *nptr)
{
    int i = 0;
    int sign = 1;
    int nb = 0;
        while((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
        {
            i++;
        }
        if(nptr[i] == '-' || nptr[i] == '+')
        {
            if(nptr[i] == '-')
                sign = - sign;
            i++;    
        }
        while( nptr[i] >= '0' && nptr[i] <= '9' )
        {
            nb = nb * 10 + (nptr[i] - '0');
            i++;
        }
        
        return nb * sign;
    
}


int main()
{
   char str[] = "       +99999999uhghgfu";
   printf("%d",ft_atoi(str));
   return 0;
}