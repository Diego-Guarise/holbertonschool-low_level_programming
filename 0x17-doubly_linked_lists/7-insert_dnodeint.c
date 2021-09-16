#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head
 * @idx: the index of the list
 * @n: value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *run = *h;
unsigned int i = 0;

if (!h)
return (NULL);

new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;
while (run)
{
if (idx == 0)
{
free(new);
return (add_dnodeint(h, n));
}
if (idx == i)
{
new->next = run;
new->prev = run->prev;
run->prev = new;
new->prev->next = new;
return (new);
}
i++;
run = run->next;
}
if (idx > i)
return (NULL);
if (idx == i)
{
free(new);
return (add_dnodeint_end(h, n));
}
return (NULL);
}
