#include <stdio.h>
/**
 * main - prints lowercase alphabets
 * Return: Always (successful)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);

}
