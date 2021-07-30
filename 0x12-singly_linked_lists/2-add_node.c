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
	char *p;
	int i;
	list_t *list;

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);

	p = strdup(str);
	if (p == NULL)
	{
		free(list);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	list->str = p;
	list->len = i;
	list->next = *head;

	*head = list;
	return (list);
}	
