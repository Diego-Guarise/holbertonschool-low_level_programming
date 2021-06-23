#include "holberton.h"
/**
 * int _islower(int c)
 * _islower - checks
 * @c: 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
