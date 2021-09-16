#include "lists.h"
/**
 * add_dnodeint - print elements
 * @head: lista
 * @n: value
 * Return: address new node or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode;

if (!head)
{
return (NULL);
}
newNode = malloc(sizeof(dlistint_t));
if (!newNode)
{
return (NULL);
}
newNode->n = n;
newNode->next = *head;
newNode->prev = NULL;
if (*head)
{
(*head)->prev = newNode;
}
return (newNode);
}
