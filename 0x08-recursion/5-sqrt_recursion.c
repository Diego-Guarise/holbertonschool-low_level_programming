#include "holberton.h"

/**
 * checker - funtion
 * @i: inital number
 * @n: number
 * Return: i, -1 or funtion
**/

int checker(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (checker(n, i + 1));
}

/**
 * _sqrt_recursion - square root
 * @n: the number to evaluate
 * Return: value of checker
 */

int _sqrt_recursion(int n)
{
	return (checker(n, 1));
}
