#include "main.h"


void print_alphabet_x10(void)
{
  int count = 0;
  while(count <= 9)
  {
  char letter = 'a';
  while(letter <= 'z')
  {
    _putchar(letter);
    letter++;
  }
  _putchar('\n');
  count++;
  }
}
