#include "ft_stock_str.h"

int ft_strlen(char *s)
{
    int i = 0;
    while(s[i])
    {
        i++;
    }
    return i;
}
char *ft_strdup(char *s)
{
    size_t len = ft_strlen(s);
    size_t i = 0;
    char *ptr = malloc(len + 1);
    if(!ptr)
    {
        return NULL;
    }
    while(s[i])
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *s = malloc((ac + 1) * sizeof(t_stock_str));
    if(!s)
    {
        return NULL;
    }
    int i = 0;
    while (i < ac)
    {
        s[i].size = ft_strlen(av[i]);
        s[i].str = av[i]; 
        s[i].copy = ft_strdup(av[i]);
        if(!s[i].copy)
        {
            while (i > 0)
            {
                i--;
                free(s[i].copy);
            }
            free(s);
            return NULL;    
        }
        i++;
    }
    s[i].size = 0;
    s[i].str = 0; 
    s[i].copy = 0;
    return s;
}

int main(int ac, char **av)
{
    if (ac < 2)
        return 1; 
    t_stock_str *tab = ft_strs_to_tab(ac - 1, av + 1);
    int i = 0;
    while ((i < ac - 1))
    {
        printf("size : %d, str : %s, copy : %s\n", tab[i].size, tab[i].str, tab[i].copy);
        i++;
    }
    
    i = 0;
    while (i < ac - 1)
    {
        free(tab[i].copy);
        i++;
    }
    free(tab);
    
    
    return 0;
}