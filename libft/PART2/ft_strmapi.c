#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(const char *src)
{
    int i = 0;
    while(src[i])
    {
        i++;
    }
    return i;
}

char * ft_strmapi(char const *s, char
(*f)(unsigned int, char))
{
    size_t i = 0;
    int len = ft_strlen(s);
    char *d = malloc(len + 1);
    if(!d || !f)
    {
        return NULL;
    }
    while(s[i])
    {
        d[i] = f(i, s[i]);
        i++;
    }
    d[i] = '\0';
    return d;
}

char ft_toupper (unsigned int i, char c)
{
    (void)i;
    if(c >= 97 && c <= 122)
    {
        c = c - 32;
    }
    return c;
}

int main()
{
    const char str1[] = "hello";
      char *result = ft_strmapi(str1, ft_toupper);
    
    if (result)  // Check if memory allocation succeeded
    {
        printf("%s\n", result);  // Print the transformed string
        free(result);  // Free the allocated memory
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
