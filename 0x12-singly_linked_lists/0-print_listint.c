#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - const listint_t *h - print
 * @h: blablalba
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{
	while (h)
	{
		printf("%d\n", (h->n));
		h = h->next;
	}
	return (0);
}
