#include "lists.h"
/**
 * delete_dnodeint_at_index - add node at the end of lists
 * @head: lists
 * @idx: int
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *run = *head;
unsigned int i = 0;
if (*head == NULL)
return (-1);

if (index == 0)
{
if (*head)
{
*head = run->next;
run->next->prev = NULL;
run->next = NULL;
return (1);
}
else
return (-1);
}
while (run->next != NULL)
{
if (index == i)
{
run->next->prev = run->next->prev->prev;
run->prev->next = run->prev->next->next;
run->prev = NULL;
run->next = NULL;
return (1);
}
run = run->next;
i++;
}
return (-1);
}
