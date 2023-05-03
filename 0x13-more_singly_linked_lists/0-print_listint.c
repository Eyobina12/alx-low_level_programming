#include "lists.h"

/**
 * print_listint
 * to print linked lists
 *
 * Return:nodes
 */
size_t ptint_listint(const listint_t *h)
{
size_t num = 0:
while (h)
{
printf("%d\n" ,h->n);
num++;
h = h->next;
}
return (num);
}
