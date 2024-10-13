#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void * ft_memalloc(size_t size)
{
    size_t i = 0;
    unsigned char *p = malloc(size);
    if(!p)
    {
        return NULL;
    }
    while(i < size)
    {
        p[i] = 0;
        i++;
    }
    return (void *)p;
}

int main()
{
 
    char str1[] = "hello";
    char *str = ft_memalloc(6); // Allocate memory for 6 characters
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
    str[i] = '\0';
    printf("%s", str);

    // Free the allocated memory
    free(str);
    
    printf("%s", str);
    return 0;
}
