#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strequ(char const *s1, char const *s2)
{
    int i = 0;
    while(s1[i] && s1[i] == s2[i])
    {
       i++;  
    }
    if(s1[i] != s2[i])
            return 0; 
    return 1;
}

int main()
{
    const char str1[] = "HELLO world";
    const char str2[] = "HELLO worl";
      int result = ft_strequ(str1, str2);
    
    printf("%d",result);
    return 0;
}
