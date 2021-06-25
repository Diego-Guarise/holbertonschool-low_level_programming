#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
**/

void print_line(int n)
{
	int x, i;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (i = 0; i < x; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
