#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head
 * @index: where index is the index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *run = head;
unsigned int iindex = 0;

while (run)
{
if (iindex == index)
{
return (run);
}
run = run->next;
iindex++;
}
return (NULL);
}
