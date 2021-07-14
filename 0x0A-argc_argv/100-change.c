#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number coins make change
 * for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: the number of arguments is not exactly 1. Other 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int amount, cents;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		amount = 0;
		for (; (cents % coins[i]) != 0; i++)
		{
			amount += (cents / coins[i]);
			cents = cents % coins[i];
		}
		amount += cents / coins[i];
		if ((atoi(argv[1])) < 0)
			amount = 0;
		printf("%d\n", amount);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
