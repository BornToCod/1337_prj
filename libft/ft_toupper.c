#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_toupper ( int c )
{
    if(c >= 97 && c <= 122)
    {
        return c - 32;
    }
    return c;
}

int main()
{
  int i=0;
  char str[]="Test Stri==ng.\n";
  char c;
  while (str[i])
  {
    c=str[i];
    putchar(ft_toupper(c));
    i++;
  }
  return 0;
}