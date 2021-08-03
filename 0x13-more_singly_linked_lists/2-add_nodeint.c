#include "lists.h"

/**
 * listint_t *add_nodeint - new node
 * @head: jeje
 * @n: jaja
 * Return: head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *inicio = NULL;
	int i;
	
	inicio = malloc(sizeof(listint_t));
	if (head && inicio)
	{
		inicio->n = n;
		inicio->next = *head;
		*head = inicio;
		return (inicio);
	}
	else
	{
		return (NULL);
	}
	for (i = 0; i != '\0'; i++)
	{
		printf("%d\n", n);
	}
}
