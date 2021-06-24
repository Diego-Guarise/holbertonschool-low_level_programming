#include "holberton.h"

/**
*** more_numbers - prints 10 times the numbers, from 0 to 14
*** Return: 0 always
***/

void more_numbers(void)
{
	int x;
	int r;

	for (r = '0'; r <= '10'; r++)
	{
		for (x = '0'; x <= '15'; x++)
			_putchar (x);
	}
	_putchar ('\n')
}
