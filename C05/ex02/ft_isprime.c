#include <unistd.h>
#include <stdio.h>

int	ft_isprime(int nb)
{
    if(nb==0 || nb == 1){
        return 0;
    }
    int a = nb / 2;
    int i = 2;
    while(i < a + 1){
        if(nb % i == 0 ){
            return 0;
        }
      i++;  
    }
    return 1;
    
    

}

int main(){
    int a = 29;
    printf("the number %d is prime %d",a,ft_isprime(a));
    
    
    return 0;
}