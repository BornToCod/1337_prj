#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ft_strclr(char *s)
{
    size_t i = 0;
    while(s[i])
    {
        s[i] = '\0';
        i++;
    }
}

int main()
{
 
    char str1[] = "hello";
    
    ft_strclr(str1);
    printf("%s\n", str1);
    
    printf("%s", str1);
    return 0;
}
