#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - const list_t *h - print
 * @h: blablalba
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;
	list_t *str = NULL;

	for (i = 0; h != NULL; i++)
	{
		if (!str)
			printf("[0] %s\n", "(nil)");
		else
		{
			printf("[%s] %s\n", "[i]", "World");
		}
	}
	return (i);
}
