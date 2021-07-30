#include "lists.h"
#include <string.h>
/**
* add_node -function
*@str: blb
* @head: claslca
* Return: lbla
*/

list_t *add_node(list_t **head, const char *str)
{
	char *new = NULL;
	list_t *h = NULL;

	if (str)
		new = strdup(str);
	h = malloc(sizeof(list_t));
	if (h && head)
	{
		h->str = new;
		if (new)
			h->len = strlen(str);
		h->next = *head;
		*head = h;
	}
	return (h);
}
