#include <stdio.h>
/**
  * main - prints numbers separated by comas
  * Return: Always success
  */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n != '9')
{
putchar(',');
putchar (' ');
}
}
putchar('\n');
return (0);
}
