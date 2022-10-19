#include "main.h"

/**
 * _islower - check if lowercase
 * @c: The characters
 * Return: 1 if lowercase otheriwse 0.
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
