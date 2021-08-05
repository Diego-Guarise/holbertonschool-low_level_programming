#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: ssss
 * Return: n
*/
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp = NULL;

	if (!head)
	{
		return (0);
	}
	if (head)
	{
		temp = *head;
		i = (*head)->n;
		*head = (*head)->next;
		free(temp);

	}
	return (i);
}
