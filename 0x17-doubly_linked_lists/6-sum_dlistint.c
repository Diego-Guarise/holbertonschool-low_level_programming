#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a list.
 * @head: head
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *run = head;
int sum = 0;

while (run)
{
sum += run->n;
run = run->next;
}
return (sum);
}
