#include "holberton.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: 0 Is good
 */
void print_alphabet(void)
{
	char letras;

	for (letras = 'a'; letras <= 'z'; letras++)
		_putchar(letras);
	{
		_putchar('\n');
	}
}
