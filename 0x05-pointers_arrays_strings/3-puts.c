#include "holberton.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */

void _puts(char *str)
{
	for (c = 0; str[c] != '\0'; c++)
		printf("%c", str[c]);
	return (0);
}
