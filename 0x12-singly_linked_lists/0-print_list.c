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
	size_t i;

	i = 0;
	while (h)
	{
		if (!h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
			i++;
			h = h->next;
		}
		else
		{
			printf("[0] (nil)\n");
		}
	}
	return (i);
}
