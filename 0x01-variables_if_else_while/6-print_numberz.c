#include <stdio.h>
/* more headers goes there */
/**
 * main - print alphabet
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int numeros;

	for (numeros = '0'; numeros <= '9'; numeros++)
		putchar(numeros);
	{
		putchar('\n');
	}
	return (0);
}
