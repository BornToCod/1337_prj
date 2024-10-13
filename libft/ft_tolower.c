#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_tolower ( int c )
{
    if(c >= 65 && c <= 90)
    {
        return c + 32;
    }
    return c;
}

int main()
{
  int i=0;
  char str[]="TEST Stri==ng.\n";
  char c;
  while (str[i])
  {
    c=str[i];
    putchar(ft_tolower(c));
    i++;
  }
  return 0;
}