#include <stdio.h>
#include "main.h"
/**
* _isalpha - Checks alpha chars
*
* @c: parameter
*
* Return: 0 or 1
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
