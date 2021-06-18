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
	
	printf("Size of char: %d byte(s)\n", (charSize));
	printf("Size of int: %d byte(s)\n", (intSize));
	printf("Size of long int: %d byte(s)\n", (longSize));
	printf("Size of long long int: %d byte(s)\n", (longlongSize));
	printf("Size of a float: %d byte(s)\n", (floatSize);
	return (0);
}
