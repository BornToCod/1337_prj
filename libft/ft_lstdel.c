#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *,
 size_t))
 {
    t_list *tmp;
    if (!alst || !*alst || !del)
        return;
    while (*alst)
    {
        tmp = (*alst)->next;
        del((*alst)->content, (*alst)->content_size);
        free(*alst);
        *alst = tmp;
    }
    *alst = NULL;
 }


void *del(void *content, size_t content_size)
{
    (void)content_size;
    free(content);
}