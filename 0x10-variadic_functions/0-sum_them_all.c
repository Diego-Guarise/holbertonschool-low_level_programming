#ifndef sum
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguements
 * @n: balb lba bla bla
 * Return: 0 if n==0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int sum;

	if (n == 0)
		return (0);

	va_start(list, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
#endif
