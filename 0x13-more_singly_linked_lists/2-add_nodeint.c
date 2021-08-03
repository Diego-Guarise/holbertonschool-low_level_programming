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

	if (inicio && head)
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
}
