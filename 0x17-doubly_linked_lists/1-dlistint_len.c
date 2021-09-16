#include "lists.h"
/**
 * dlistint_len - return num of elements
 * @h: lista
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *run;
int nodes = 0;

run = h;
while (run)
{
run = run->next;
nodes++;
}
return (nodes);
}
