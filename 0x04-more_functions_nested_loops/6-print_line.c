#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: is the number of times the character _ should be printed
**/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n > 1; n++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
