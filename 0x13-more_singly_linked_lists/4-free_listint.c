#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: el head
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head)
	{
		ptr = head->next;
		free(head);
		free_listint(ptr);
	}
}
