#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed
**/

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			putchar('_');
		}
	}
	putchar('$');
	putchar('\n');
}
