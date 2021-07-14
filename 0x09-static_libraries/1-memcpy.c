#include "holberton.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, x;

	i = 0;
	x = 0;
	while (n > 0)
	{
		dest[i] = src[x];
		i++;
		x++;
		n--;
	}
	return (dest);
}
