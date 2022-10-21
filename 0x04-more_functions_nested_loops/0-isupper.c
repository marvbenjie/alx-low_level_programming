#include "main.h"

/**
 * _isupper - this checks for uppper and lower case
 * @c: input to the function
 * Return: 1 , 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
