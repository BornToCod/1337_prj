#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count_words(const char *s, char c)
{
    int i = 0;
    int inword = 0;
    int words = 0;
    while(s[i])
    {
        if(s[i] != c && !inword)
        {
            words++;
            inword = 1;
        }
        else if(s[i] == c && inword)
        {
            inword = 0;
        }
        i++;
    }
    return words;
}

char *ft_checksep(const char *s, char c, int *index)
{
    int start = *index;
    int end = start;
    int i = 0;
    int j = 0;
    while(s[start] == c)
    {
        start++;
    }
    end = start;
    while(s[end] && s[end] != c)
    {
        end++;
    }
    *index = end;
    if(start >= end)
    {
         return NULL;
    }
    char *p = malloc((end - start) + 1);
    if(!p)
    {
        return NULL;
    }
    while(start < end)
    {
        p[j] = s[start];
        start++;
        j++;
    }
    p[j]= '\0';
    return p;
    
}

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

char ** ft_strsplit(char const *s, char c)
{
    int i = 0;
    int j = 0;
    int inword = 0;
    int index = 0;
    int words = count_words(s, c);
    char **arr = malloc((words + 1) * sizeof(char *));
    if(!arr)
        return NULL;
    while(i < words)
    {
        arr[i] = ft_checksep(s, c, &index);
        i++;
    }
    arr[i] = NULL;
    return arr;
}
int main()
{
    const char str1[] = "****HELLO*world**gfghf*";
    
    char **res = ft_strsplit(str1, '*');
    int i = 0;
    while(res[i] != NULL)
    {
        printf("%s\n", res[i]);
        free(res[i]);
        i++;
    }
    free(res);
 
   
    return 0;
}

