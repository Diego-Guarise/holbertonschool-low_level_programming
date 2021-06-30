#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */

void _puts(char *str)
{
	int c;

	for (i = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
