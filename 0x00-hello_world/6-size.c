#include <stdio.h>
/**
*main - display a text
*
 *Description: display "Programming is like
 *building a multilingual puzzle using the puts function.
 *Return: 0 when finish
 */
int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longSize = sizeof(long int);
	int longlongSize = sizeof(long long int);
	int floatSize = sizeof(float);
	
	printf("Size of char: %d bytes\n", (charSize));
	printf("Size of int: %d bytes\n", (intSize));
	printf("Size of long int: %d bytes\n", (longSize));
	printf("Size of a float: %d byte(s)\n", (floatSize);
	printf("Size of long long int: %d byte\n", (longlongSize));
	return (0);
}
