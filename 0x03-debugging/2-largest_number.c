#include "holberton.h"

/**
** largest_number - prints the largest of 3 integers
** @a: integer
** @b: integer
** @c: integer
** Return: largest
*/

int largest_number( a, b, c)
{
	int a, b, c;
	int largest;

	if (a > b && a > c)
		{
		largest = a;
		}
	else if (b > a && b > c)
		{
		largest = b;
		}
	else
		{
		largest = c;
		}

	return (largest);
}
