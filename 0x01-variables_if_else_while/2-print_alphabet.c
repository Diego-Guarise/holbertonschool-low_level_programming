#include <stdio.h>
/* more headers goes there */
/**
 * main - print alphabet
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char letras;

	for (letras = 'a'; letras <= 'z'; letras++)
		putchar(letras);
	{
		putchar('\n');
	}
	return (0);
}
