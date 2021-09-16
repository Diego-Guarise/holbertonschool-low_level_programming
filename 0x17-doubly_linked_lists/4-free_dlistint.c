#include "lists.h"
/**
 * free_dlistint - free list
 * @head: lista
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *run;

while (head)
{
run = head->next;
free(head);
head = run;
}
}
