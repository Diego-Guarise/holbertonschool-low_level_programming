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
	
	printf("Size of char: %zu bytes\n", sizeof(charSize));
	printf("Size of int: %zu bytes\n", sizeof(intSize));
	printf("Size of long int: %zu bytes\n", sizeof(longSize));
	printf("Size of a float: %d byte(s)\n", sizeof(floatSize);
	printf("Size of long long int: %zu byte\n", sizeof(longlongSize));
	return (0);
}
