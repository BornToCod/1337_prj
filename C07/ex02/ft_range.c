#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min,int max){
    if(min >= max)
        return NULL;
    
    int *range;
    range=(int *)malloc((max - min) * 4);
    int i = 0;
    // int res=min;
    while(min < max){
        range[i]=min;
        i++;
        min++;
    }
    return range;
}

int main(){
    int *a=ft_range(2 , 9);
    for(int i=0;i<5;i++){
        printf("%d\n", a[i]);
    }
    free(a);
  return 0;
}
