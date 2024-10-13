#include <unistd.h>
#include <stdio.h>


// void    ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

void    ft_ft(int *n){
    *n=42;
    // ft_putchar()
}


int main(){
int b=500;
int *a;
a=&b;
    printf("%d\n",*a);
    ft_ft(a);
    printf("%d",*a);
}