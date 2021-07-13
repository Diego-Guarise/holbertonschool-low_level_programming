#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * num_checker - checks if a given char is number or not
 * @a: char to be checked
 * Return: 1, if its a number, else 0
 **/

int checker(char *a)
{
	int i, n, len;

	i = 0;
	n = 0;
	len = strlen(a);
	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
			return (-1);
		else
			n = n * 10 + (a[i] - '0');
		i++;
	}
return (n);
}
/**
 * main - add positive numbers
 * @argc: arguement
 * @argv: arguement
 * Return: result of addition or 1
 **/
int main(int argc, char *argv[])
{
	int i, n, s;

	s = 0;
	for (i = 1; i < argc; i++)
	{
		n = checker(argv[i]);
		if (n == -1)
		{
			printf("Error\n");
			return (1);
		}
		s += n;
	}
	printf("%d\n", s);
	return (0);
}
