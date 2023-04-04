#include "list.h"
/**
 * print listint_t all
 * linked list listint_t to print
 *
 * Return:num of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;
while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
