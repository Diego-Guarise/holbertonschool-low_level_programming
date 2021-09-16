#include "lists.h"
#include <stdlib.h>
/**
 * print_dlistint - print elements
 * @h: lista
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *run;
    int nodes = 0;

    run = h;
    while(run)
    {
        printf("%d\n", run->n);
        run = run->next;
        nodes++;
    }
    return(nodes);
}
