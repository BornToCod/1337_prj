#include "libft.h"

 void ft_lstadd(t_list **alst, t_list *new)
 {
    if(!alst || !new) 
        return NULL;
    new->next = *alst;
    *alst = new;
 }
