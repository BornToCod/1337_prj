#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char * ft_strtrim(char const *s)
{
    size_t srclen = ft_strlen(s);
    size_t j = 0;
    size_t a = 0;
    size_t b = srclen;
    while(s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
    {
        a++;
    }
    while(b > a && (s[b - 1] == ' ' || s[b - 1] == '\n' || s[b - 1] == '\t'))
    {
        b--;
    }
    char *result = malloc((b - a) + 1);
    if(!result)
        return NULL;
    while(a < b)
    {
        result[j] = s[a];
        j++;
        a++;
    }
    result[j] = '\0';
    return result;
    
}

int main()
{
    const char str1[] = "           HELLO world     ";

    char *result1 = ft_strtrim(str1);
    if (result1)
    {
        printf("Test 1: %s ", result1);
        free(result1);  // Free the allocated memory
    }
    else
    {
        printf("Test 1: Memory allocation failed or invalid range.\n");
    }

   
    return 0;
}

