#include <stdio.h>
/**
 * main - prints alphabets in lowercase and uppercase
 * Return: Always (successful)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
