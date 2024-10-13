#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b) {
    int d=*a / *b;
    int r=*a % *b;
    int *a=&d;
    int *b=&r;
}

int main() {
    int a = 20;
    int b = 5;
    int *d=&a;  
    int *r=&b;  
    
    ft_ultimate_div_mod(d, r);  
    
    printf("The division of %d by %d is %d\n", a, b, *d);
    printf("The remainder of %d divided by %d is %d\n", a, b, *r);
    
    return 0;
}
