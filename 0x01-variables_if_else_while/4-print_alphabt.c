#include <stdio.h>
/**
 * main - prints ommit some alphabet
 * Return: Aways (successful)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
