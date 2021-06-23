#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase x10
 *
 * 
 */
void print_alphabet_x10(void)
{
	char letras;
	int i;

	i = 0;

	while (i < 10)
	{
		for (letras = 'a'; letras <= 'z'; letras++)
		_putchar(letras);
		_putchar('\n');
		i++;
	}
}
