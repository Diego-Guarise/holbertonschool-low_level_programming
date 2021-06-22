#include <stdio.h>
/* more headers goes there */
/**
 * main - print alphabet
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int letras;

	for (letras = 'z'; letras >= 'a'; letras--)
		putchar(letras);
	{
		putchar('\n');
	}
	return (0);
}
