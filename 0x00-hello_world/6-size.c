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
	int intType;
	float floatType;
	double doubleType;
	char charType;
	
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	printf("Size of char: %zu byte\n", sizeof(charType));
	return (0);
}
