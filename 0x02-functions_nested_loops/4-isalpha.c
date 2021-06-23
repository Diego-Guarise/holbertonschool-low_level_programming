#include "holberton.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: the character to check
 * Return: 1 or 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
