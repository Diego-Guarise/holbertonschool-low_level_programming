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

	if (h)
		{
		for (i = 0; h != NULL; i++)
		{
			if (h->str)
				printf("[%d] %s\n", h->len, h->str);
			else
				printf("[0] (nil)\n");
			h = h->next;
		}
		}
	return (i);
}
