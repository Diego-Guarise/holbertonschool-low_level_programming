#include <stdio.h>
/* more headers goes there */
/**
 * main - task 09
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
