#include "lists.h"

/**
  * listint_t *add_nodeint_end - adds a new node at the end
  * @n: lalal
  * @h: alala
  * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = NULL;
	listint_t *end;
	int i;
	ptr = malloc(sizeof(listint_t));
	if (ptr && *head)
	{
		ptr->n = n;
		ptr->next = NULL;
		end = *head;
		while (end->next)
			end->next = end;
		end->next = ptr;
		return (ptr);
	}
	for (i = 0; i != '\0'; i++)
		printf("%d\n", n);
	return (NULL);
}
