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
	char d;

	while(d <= '9')
	{
		putchar(d);
		d++;
	}
	for(c = 'a';c <= 'f';c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
