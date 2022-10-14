#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	char c;
	char out;
	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar("%c", tolower(c));
	}
	return (0);
}
