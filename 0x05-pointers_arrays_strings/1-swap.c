#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @b: variable
 * @a: variable
 * @c: variable
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
