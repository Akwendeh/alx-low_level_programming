#include <stdio.h>
/**
  * main - prints numbers in hexadecimal
  * Return: Always success
  */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
putchar(c);
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
