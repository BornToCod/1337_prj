#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size) {
    int i, temp;
    i=0;
    while ( i < size / 2) {
        temp = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = temp;
        i++;
    }
}

int main() {
    int a[5] = {1, 5, 3, 9, 4};
    int *b = a;
    ft_rev_int_tab(b, 5);
    
    int j=0;
    printf("Reversed array: ");
    while(j < 5) {
        printf("%d ", b[j]);
        j++;
    }
    printf("\n");

    return 0;
}
