#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/* Write a program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name, without having to compile it again
 * You should not remove the path before the name of the program
 * @arcg: argument
 * @argv: argument
 * Return; exit
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
