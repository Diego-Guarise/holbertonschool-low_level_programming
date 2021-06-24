#include "holberton.h"

/**
*** more_numbers - prints 10 times the numbers, from 0 to 14
*** Return: 0 always
***/

void more_numbers(void)
{
	int x, r;

	for (r = 0; r <= 9; r++)
	{
		for (x = 0; x <= 14; x++)
			_putchar (x);
	}
	_putchar ('\n')
}
