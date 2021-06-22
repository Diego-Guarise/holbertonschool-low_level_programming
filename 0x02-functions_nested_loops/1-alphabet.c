#include "holberton.h"
/* more headers goes there */
/**
 * main - print alphabet
 * Description - print_alphabet
 * Return: 0
 */
/* betty style doc for function main goes there */
void print_alphabet(void)
{
	char letras;

	for (letras = 'a'; letras <= 'z'; letras++)
		_putchar(letras);
	{
		_putchar('\n');
	}
}
