#include "lists.h"

/**
 *  listint_len - const listint_t *h - print
 * @h: blablalba
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int contador = 0;

	if (h)
	{
		if (h->next)
		{
			contador++;
			return (listint_len(h->next) + 1);
		}
		else
		{
			contador++;
		}
	}
	return (contador);
}
