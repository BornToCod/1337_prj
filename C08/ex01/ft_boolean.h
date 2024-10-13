#ifndef FT_H
#define FT_H

#include <unistd.h>

typedef int t_bool;
#define EVEN(nb) (nb % 2 == 0)
#define TRUE 1
#define FALSE 0
#define SUCCESS 0

#define EVEN_MSG "THE NUMBER IS EVEN"
#define ODD_MSG "THE NUMBER IS ODD"
void    ft_putstr(char *str);
t_bool  ft_is_even(int nbr);

#endif