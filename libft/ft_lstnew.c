#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    while(i < n)
    {
       ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return dest;
}
t_list * ft_lstnew(void const *content, size_t
 content_size)
 {
    t_list *s = malloc(sizeof(t_list));
    if(!s)
        return NULL;
    s->content = malloc(content_size + 1);
    if(!s->content)
    {
        free(s);
        return NULL;
    }
    if(!content)
    {
        s->content = '\0';
        s->content_size = 0;
        s->next = NULL;
    }
    ft_memcpy(s->content, content, content_size);
    s->content_size = content_size;
    s->next = NULL;
    return s;
 }

 int main()
 {
    char *str = "hello";
    t_list *s = ft_lstnew(str, sizeof(str));
    printf("content is : %s\n", (char *)s->content);
    printf("content size is : %zu\n", s->content_size);
    printf("content next is : %p\n", s->next);
    return 0;
 }