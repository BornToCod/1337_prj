#include <unistd.h>



 int letter = 122; 
   void ft_print_reverse_alphabet(void){
    while (letter >= 97) { 
        write(1, &letter, 1); 
        letter--; 
    }}


 