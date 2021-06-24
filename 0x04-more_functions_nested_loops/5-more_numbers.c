#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
**/

void more_numbers(void)
{
	int x, r;

	for (r = 0; r <= 9; r++)
	{
		for (x = 0; x <= 14; x++)
			if (x > 9)
				_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
	}
	_putchar('\n');
}
