#include <stdio.h>
#include "holberton.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
	int a, b, c;
	int largest;

	if (b >= a && b >= c)
	{
		largest = b;
	}
	else if (a >= b && a >= c)
	{
		largest = a;
	}
	else
	{
		largest = c;
	}
	printf("%d is the largest number\n", largest);

	return (0);
}
