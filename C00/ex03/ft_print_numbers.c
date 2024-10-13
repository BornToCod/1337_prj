#include <unistd.h>
#include <stdlib.h>



 int letter = 48; 
   void ft_print_numbers(void){
    while (letter <= 57) { 
        write(1, &letter, 1); 
        letter++; 
    }}


