#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - const list_t *h - print
 * @h: blablalba
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int contador = 0;

	if (h)
	{
		if (h->next)
		{
			printf("%d\n", h->n);
			contador++;
			return (print_listint(h->next) + 1);
		}
		else
		{
			printf("%d\n", h->n);
			contador++;
		}
	}
	else
	{
		return (-1);
	}
return (contador);
}
