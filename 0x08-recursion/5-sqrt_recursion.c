#include "holberton.h"

/**
 * sqtRecursive - computes square root recursively doing binary search
 * @start: inital number
 * @end: last number within the limit of number
 * @m: given number
 * Return: 1 if not found sqrroot, else sqrroot
**/

int checker(int n, int i)
{
	if (i * i == n)
		return(i);
	if (i * i > n)
		return(-1);
	return(checker(n, i + 1));
}

int _sqrt_recursion(int n)
{
	return(checker(n, 1));
}
