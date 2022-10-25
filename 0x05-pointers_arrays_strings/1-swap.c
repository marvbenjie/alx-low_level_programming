#include "main.h"

/**
 * swap_int  - swaps integres
 * @a: first integer
 * @b: second integer
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
