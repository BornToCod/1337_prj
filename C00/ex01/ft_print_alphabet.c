#include <unistd.h>
#include <stdlib.h>


// char str[] = "abcdefghijklmnopqrsduvwsyz";
// void ft_print_alphabet(void){
//     write(1,str,27);
//  }


  int letter = 97; 
   void ft_print_alphabet(void){
    while (letter <= 122) { 
        write(1, &letter, 1); 
        letter++; 
    }}







// (char)ascii_code;

