#include "main.h"
/*
 * binary_to_uint - a function that converts a binary number
 * Return: number in decimal
 * @b: string
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, m = 1;
	unsigned int out = 0;

	while (b[i])
		i++;
	while (i)
	{
		i--;
		if (b[i] == '1')
			out += m;
		m = m * 2;
	}
	return (out);
}
