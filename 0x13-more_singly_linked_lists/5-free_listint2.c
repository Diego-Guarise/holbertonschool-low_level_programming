#include "lists.h"
/**
* free_listint2 - function that frees a listint_t list.
* @head: pointer
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	free(*head);
	*head = NULL;
}
