#include <stdio.h>
/**
  * main - prints combination of two digit numbers
  * Return: Always success
  */
int main(void)
{
int n, i;
for (n = '0'; n <= '9'; n++)
{
for (i = '0'; i <= '9'; i++)
{
if (n < i)
{
putchar(n);
putchar(i);
if (n != '8' || (n == '8' && i != '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
