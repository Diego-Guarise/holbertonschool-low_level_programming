/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size is the size of the triangle
**/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int a, b;

		for (b = 1; b <= size; b++)
		{
			for (a = b; b < size; b++)
			{
				_putchar(' ');
			}

			for (a = 1; a <= i; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
