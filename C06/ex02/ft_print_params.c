#include <unistd.h>
#include <stdlib.h>

void main(int argc, char *argv[])   
{

int i=0;
int a=1;
int b=10;
   while ( a < argc)
   {
        while (argv[a][i] != '\0')
        {
            // write(1,argv[a][i],1);
            i++;
        }
        write(1,argv[a],i);
        a++;
        write(1,&b,1);
   }
   
     
}