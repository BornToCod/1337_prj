#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size) {
    int i, temp,j;
    i=0;
    j=0;
    while(j < size){
      i = j + 1;
      while ( i < size  ) {
         
        if(tab[i] < tab[j]){
            temp = tab[j];
            tab[j] = tab[i  ];
            tab[ i ] = temp;
        }
        i++;
      }
      j++;
    }
}

int main() {
    int a[5] = {1, 5, 3, 9, 4};
    int *b = a;
    ft_rev_int_tab(b, 5);
    
    int j=0;
    printf("sorted array: ");
    while(j < 5) {
        printf("%d ", b[j]);
        j++;
    }
    printf("\n");

    return 0;
}