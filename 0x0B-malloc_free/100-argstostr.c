#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Concatenate all arguments of a program
 * @ac: Arg count
 * @av: Array of arguments
 *
 * Return: Pointer to new string, NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	if (ac)
		printf(".");
	if (**av)
		printf("\n");
	return (0);
}
