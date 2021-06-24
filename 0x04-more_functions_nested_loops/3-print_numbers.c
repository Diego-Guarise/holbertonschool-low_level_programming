#include "holberton.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9, followed by a new line.
 * i : int numbers
 * Return: 0 always
 */
void print_numbers(void)
{
	for (int i; (i = 0; i <= 9; i++))
	{
		_putchar (i);
	}
	_putchar('\n');
}
