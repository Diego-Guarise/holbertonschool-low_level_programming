#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase x10
 *
 * 
 */
void print_alphabet_x10(void);
{
	char letras;

	for (letras = 'a'; letras <= 'z'; letras++)
		putchar(letras);
	{
		putchar('\n');
	}
	return (0);
}