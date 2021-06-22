/* more headers goes there */
/**
 * main - print alphabet
 * Return: 0
 */
/* betty style doc for function main goes there */
#include <stdio.h>
#include <stdlib.h>

int main() {

	for (char letras = '0'; letras <= '9'; letras++)
	{
			putchar(letras);
	}
	
	for (char letras = 'a'; letras <= 'f'; letras++)
	{
			putchar(letras);
	}
	return (0);
}
