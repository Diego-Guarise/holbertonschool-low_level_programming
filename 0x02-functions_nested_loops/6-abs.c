#include "holberton.h"

/**
 * _abs - absolute value of an integer
 * @n: the int to check
 * Return: the absolute
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
}
