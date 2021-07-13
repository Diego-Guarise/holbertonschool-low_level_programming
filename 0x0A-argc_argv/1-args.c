#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints arguments received
 * Description: all arguments, including the first one, once per line
 * and a new line
 * Return: EXIT_SUCCESS
 * @argv: argument count
 * @argc: argument vector
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
