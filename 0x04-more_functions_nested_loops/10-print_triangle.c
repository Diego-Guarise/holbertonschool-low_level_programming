#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size is the size of the triangle
**/

void print_triangle(int size)
{
	if (size = 5)
	{
		int a, b, i;

		for (i = 1; i <= size; i++)
		{
			for (a = 0; a < (size - i); a++)
			{
				_putchar(' ');
			}

			for (b = 0; b < (i - 1); b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
