#include "holberton.h"
/**
 *
 * _islower - checks for lowercase character.
 * Return: Always 0 Success
 * @c: Character in question
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
