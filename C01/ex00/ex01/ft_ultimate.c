#include <unistd.h>
#include <stdio.h>


// void    ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

void    ft_ultimate(int *********n){
    *********n=42;
    
    // *n=42;
    // ft_putchar()
}


int main(){
    int z;
    int *a=&z;
    int **b=&a;
    int ***c=&b;
    int ****d=&c;
    int *****e=&d;
    int ******f=&e;
    int *******g=&f;
    int ********h=&g;
    int *********nb=&h;
    
    printf("%d",*********nb);
    ft_ultimate(nb);
    printf("%d",*********nb);
       

}