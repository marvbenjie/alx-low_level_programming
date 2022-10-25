#include "main.h"

/**
 * _strlen - Finds the lenght of an input string
 * @s: String pointer
 * Return: Returns lengthof s
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
