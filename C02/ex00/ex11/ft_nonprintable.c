#include <stdio.h>
#include <unistd.h>
void print_char(char c){
    write(1,&c,1);
}

void ft_putstr_non_printable(char *str) {
    int i = 0;
    int j;
    int k;
    // char s[32][3] = {"01","02","03","04","05","06","07","08","09","0a","0b","0c","0d","0e","0f","10","11","12","13","14","15","16","17","18","19","1a","1b","1c","1d","1e","1f"};
    char s[] = "0123456789abcdef";
    while (str[i] != '\0') {
        char c = str[i];

        if (c >= 32 && c <= 126) {
            print_char(c);
        }
        else{
             j=0;
             while(j < 31 ){
               if(c <= 15 && c == j){
                   c = s[j];
                   print_char('\\');
                   print_char('O');
                   print_char(c);
                   
               }
               else if(c > 15 && c==j){
                   c = s[j];
                   print_char('\\');
                   print_char('1');
                   print_char(c);
               }
               else if( c == 127){
                   print_char('\\');
                   print_char('7');
                   print_char('F');
               }
               j++;
               
           }
             

        }
        i++;
    }
}

int main() {
    char sr[] = "Coucou\ntu vas bien ?";
    
    ft_putstr_non_printable(sr);
    
    print_char('\n');

    return 0;
}