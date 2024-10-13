#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res=nb;
	int c = 0;
	int odd = 1;

    if(nb < 0){
        return 0;
    }
    while(res > 0){
        res =  res - odd;
        odd = odd + 2;
        c++;
    }
	return (c);
}

int main(){
    int a = 49;
    printf("the sqrt of %d is %d",a,ft_sqrt(a));
    
    
    return 0;
}