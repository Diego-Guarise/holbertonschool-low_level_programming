#include "lists.h"

/**
 *free_list - frees a list
 *@head: aaaaaaaaaaaa
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head =  list;
	}
}
