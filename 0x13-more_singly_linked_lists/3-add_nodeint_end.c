#include "lists.h"

/**
  * listint_t *add_nodeint_end - adds a new node at the end
  * @n: lalal
  * @head: lalalal
  * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = NULL;
	listint_t *end;
	int i;

	ptr = malloc(sizeof(listint_t));
	if (ptr)
	{
		ptr->n = n;
		ptr->next = NULL;
		if (*head)
		{
			end = *head;
			while (end->next)
				end = end->next;
			end->next = ptr;
		}
		else
			*head = ptr;
	}
	return (ptr);
}
