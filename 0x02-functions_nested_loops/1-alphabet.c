#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * void print_alphabet(void): prints alphabet in lower case
  * Return: Always success
  */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar('\n');
}
