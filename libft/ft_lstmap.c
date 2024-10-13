#include "libft.h"

 t_list * ft_lstmap(t_list *lst, t_list *
 (*f)(t_list *elem))
 {
    t_list *newlist = malloc(sizeof(t_list));
    if(!newlist || !lst || !f)
    {
        return NULL;
    }
    newlist = f(lst);
    while (lst->next != NULL)
    {
        lst = lst->next;
        newlist = newlist->next;
        newlist = f(lst);
        if(!newlist)
        {
            free(newlist);
            return NULL;
        }
        
    }
    return newlist;
 }