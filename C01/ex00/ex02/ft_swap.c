#include <unistd.h>
#include <stdio.h>


// void    ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

// void    ft_swap(int *a,int *b){
//     int n;
//     n=*a;
//     *a=*b;
//     *b=n;
//     // ft_putchar()
// }
void    ft_swap(int *a,int *b){
    int n;
    n=*a;
    *a=*b;
    *b=n;
    // ft_putchar()
}


int main(){
    int a=5;
    int b =6;
    int *c;
    int *d;
    c=&a;
    d=&b;
    ft_swap(c,d);
    printf("%d\n",a);
    printf("%d",b);
// int b=500;
// int *a;
// a=&b;
//     printf("%d\n",*a);
//     ft_ft(a);
//     printf("%d",*a);
}