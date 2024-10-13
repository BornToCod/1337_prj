#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
 typedef struct s_list
 {
    void *content;
    size_t  content_size;
    struct s_list *next;
 } t_list;

 t_list * ft_lstnew(void const *content, size_t
 content_size);

#endif