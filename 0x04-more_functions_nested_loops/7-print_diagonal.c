#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal
 * @n: parameter
 * Return: returns nothing
 */

void print_diagonal(int n)

{
	int len, space;

	if (n > 0)
	{
		for (n = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (len == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
