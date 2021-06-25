#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
**/

void print_diagonal(int n)
{
	int x, i;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			if (x > 1)
			{
				for (i = 1; i < x; i++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
