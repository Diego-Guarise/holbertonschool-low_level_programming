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
if (*head == NULL)
return (-1);

while (run != NULL)
{
if (index == i)
{
if (run->prev != NULL)
run->prev->next = run->next;
if (run->next != NULL)
run->next->prev = run->prev;
if (*head && index == 0)
{
*head = run->next;
}
run->prev = NULL;
run->next = NULL;
/*if(run->next && run->prev){free(run); }*/
return (1);
}
run = run->next;
i++;
}
return (-1);
}
