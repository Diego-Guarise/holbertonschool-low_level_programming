#include "holberton.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9, followed by a new line.
 * i : int numbers
 * Return: 0 always
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar (i + 48);
	}
	_putchar('\n');
}
