#include "holberton.h"
/**
 * _isupper(int c) - checks for uppercase character.
 * @c: the character to check
 * Return: Returns 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}
