#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
