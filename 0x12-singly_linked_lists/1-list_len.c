#include "lists.h"

/**
 *list_len - returns the number of elements in a linked
 *@h: aaaaaaaaa
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *hh;
	size_t num;

	num = 0;
	hh = h;
	while (hh != NULL)
	{
		hh = hh->next;
		num++;
	}
	return (num);
}

