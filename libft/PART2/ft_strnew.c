#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * ft_strnew(size_t size)
{
    size_t i = 0;
    char *p = malloc(size + 1);
    if(!p)
    {
        return NULL;
    }
    
    while(i < size + 1)
    {
        p[i] = '\0';
        i++;
    }
    return p;
}

int main()
{
 
    char str1[] = "hello";
    char *str = ft_strnew(5);
    size_t i = 0;
    if (str == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    while(str1[i])
    {
        str[i] = str1[i];
        i++;
    }
    printf("%s\n", str);

    free(str);
    
    printf("%s", str);
    return 0;
}
