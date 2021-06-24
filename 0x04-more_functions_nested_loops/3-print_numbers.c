#include "holberton.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9, followed by a new line.
 * x : int numbers
 * Return: 0 always
 */

void print_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		_putchar (x);
	}
	_putchar('\n');
}
