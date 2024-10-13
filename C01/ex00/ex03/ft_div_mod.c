#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod) {
    *div = a / b;
    *mod = a % b;
}

int main() {
    int a = 20;
    int b = 5;
    int d;  
    int r;  
    
    ft_div_mod(a, b, &d, &r);  
    
    printf("The division of %d by %d is %d\n", a, b, d);
    printf("The remainder of %d divided by %d is %d\n", a, b, r);
    
    return 0;
}
