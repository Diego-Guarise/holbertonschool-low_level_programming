#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of lists
 * @head: lists
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode, *run = *head;

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
newNode->next = NULL;

if (*head == NULL)
{
newNode->prev = NULL;
*head = newNode;
return (newNode);
}

while (run->next)
{
run = run->next;
}
run->next = newNode;
newNode->prev = run;
newNode->next = NULL;
return (newNode);
}
