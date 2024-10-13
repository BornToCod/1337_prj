#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strrev(char *str, int sign)
{
    int i = 0;
    int len;
    char swap;
    while(str[i])
    {
        i++;
    }
    len = i;
    if(sign == -1)
    {
        i = 1;
    }
    i = 0;
    while(i < len / 2)
    {
        swap = str[len - 1 - i];
        str[len - 1 - i] = str[i];
        str[i] = swap;
        i++;
    }
    return str;
}

char * ft_itoa(int n)
{
    char *arr;
    arr = malloc(32);
    if(!arr)
    {
        return NULL;
    }
    int sign = 1;
    int i = 0;
    if(n < 0)
    {
        n = -n;
        sign = -1;
        arr[i++] = '-';
    }
    while(n > 0)
    {
        arr[i] = n % 10 + '0';
        n = n / 10;
        i++;
    }
    ft_strrev(arr, sign);
    return arr;

}
int main()
{
    // char str1[] = "HELLO";
    
    printf("%s", ft_itoa(1234));
   
    return 0;
}

