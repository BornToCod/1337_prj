#include <unistd.h>

void print_char(char c){
    write(1,&c,1);
}
void put_nbr(int n){
    if(n < 10){
        print_char('0');
        print_char(n+'0');
    }
    else{
        int q = n / 10;
        int r = n % 10;
        print_char(q+'0');
        print_char(r+'0');
    }
}
void ft_print_comb2(){
    int i;
    int j;
    i=0;
    while(i<= 99){
        j=i+1;
        while(j<=99){
            put_nbr(i);
            print_char(' ');
            put_nbr(j);
            print_char(',');
            print_char(' ');
            j++;
        }
        i++;
    }
    
}
int main(void){
    ft_print_comb2();
}