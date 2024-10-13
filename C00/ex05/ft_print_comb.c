#include <unistd.h>

void ft_print_comb(){
int i=48;
int j=48;
int k=48;
while(i <= 57 ){
    j=i+1;
    while(j <= 57 ){
        k=j+1;
        while(k <= 57){
           if(i<j<k){
             write(1,&i,1);
             write(1,&j,1);
             write(1,&k,1);
             write(1,", ",2); 
              }
              k++;
        }   
    j++;
    }
i++;   
}   
}           
int main(void){
  ft_print_comb();
} 

