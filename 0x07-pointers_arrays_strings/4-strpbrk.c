#include "holberton.h"
#include <stddef.h>
#include <string.h>

/**
 * _strpbrk - searching a string for any of a set of bytes
 * @s: the string
 * @accept: set of bytes
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int x;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
				return (&s[i]);
		}
	}
	return (NULL);
}
