#include <unistd.h>
#include <stdlib.h>

void main(int argc, char *argv[])   
{
   int i =0;
   while (argv[0][i] != '\0')
   {
      i++;
   }
        write(1,argv[0],i);
}