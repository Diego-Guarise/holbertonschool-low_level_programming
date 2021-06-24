#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: the character to check
 * Return: Returns 1 if c is a digit (0-9), 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
