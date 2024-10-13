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

size_t	ft_strlcat(char *dest,const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t	destlen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	i = destlen;
	j = 0;
	if (size <= destlen)
		return (size + srclen);
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (srclen + destlen);
}


char * ft_strjoin(char const *s1, char const
 *s2)
{
    size_t len_s1 = ft_strlen(s1);
    size_t len_s2 = ft_strlen(s2);
    size_t total_len = len_s1 + len_s2;
    char *result = malloc(total_len + 1);
    if(!result)
        return NULL;
    result[0] = '\0';
    ft_strlcat(result, s1, total_len + 1);
    ft_strlcat(result, s2, total_len + 1);
    return result;
}

int main()
{
    const char str1[] = "HELLO world";
    const char str2[] = " world hello";
    
    char *result1 = ft_strjoin(str1, str2);
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

