#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z') || if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
