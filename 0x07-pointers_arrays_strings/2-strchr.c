#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: a pointer to a character aka the character found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
