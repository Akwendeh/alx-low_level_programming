#include "main.h"
/**
 * _isalpha - to check either c is a letter, lowercase or uppercase
 * @c: the int used for argument of the function
 * Return: 0
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
