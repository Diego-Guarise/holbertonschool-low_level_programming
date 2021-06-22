#include <stdio.h>
/* more headers goes there */
/**
 * main - print alphabet deleted e and q
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	char letras;

	for (letras = 'a'; letras <= 'z'; letras++)
	{
		if (letras != 'e' && letras != 'q')
			putchar(letras);
	}
	return (0);
}
