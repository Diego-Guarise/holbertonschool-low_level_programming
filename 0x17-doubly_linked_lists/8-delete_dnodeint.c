#include "lists.h"
/**
 * delete_dnodeint_at_index - add node at the end of lists
 * @head: lists
 * @index: int
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *run = *head;
unsigned int i = 0;

if (!head || *head == NULL)
return (-1);
if (!index)
{
*head = run->next;
if (run->next)
run->next->prev = NULL;
free(run);
return (1);
}
while (index > i)
{
run = run->next;
if (!run)
return (-1);
index--;
}
if (run->prev != NULL)
run->prev->next = run->next;
if (run->next != NULL)
run->next->prev = run->prev;
free(run);
return (1);
}
