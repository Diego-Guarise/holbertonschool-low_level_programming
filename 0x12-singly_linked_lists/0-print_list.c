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
	const list_t *new;
	size_t i;
	new = h;

	if (new)
		{
		for (i = 0; new != NULL; i++)
		{
			if (new->str)
				printf("[%d] %s\n", new->len, new->str);
			else
				printf("[0] (nil)\n");
			new = new->next;
		}
		}
	else
		return (-1);
	return (i);
}
