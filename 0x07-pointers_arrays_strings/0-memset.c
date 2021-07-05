#include "holberton.h"

/**
 *_memset - fills memory with a constant byte.
 *@s: starting address of memory to be filled
 *@b: the constant byt
 *@n: bytes of the memory area pointed to
 *Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
