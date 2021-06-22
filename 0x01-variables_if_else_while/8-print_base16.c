/* more headers goes there */
/**
 * main - print alphabet
 * Return: 0
 */
/* betty style doc for function main goes there */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char numeros;
	char letras;
	for (numeros = '0'; numeros <= '9'; numeros++)
	{
		putchar(numeros);
	}
	for (letras = 'a'; letras <= 'f'; letras++)
	{
		putchar(letras);
	}
	putchar('\n');
	return (0);
}
