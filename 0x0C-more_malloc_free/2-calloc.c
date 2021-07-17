#include <stdlib.h>
#include "holberton.h"
/**
 * *_calloc - call
 * @nmemb: n
 * @size: size
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p = NULL;
	void *f;

	if (nmemb && size)
		p = malloc(nmemb * size);
	if (p)
	{
		for (i = 0; i < (nmemb * size); i++)
			*(p + i) = 0;
	}
	f = p;
	return (f);
}
