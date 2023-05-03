#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * linked list
 * struct listint_s
 * n:intger
 * Descripition:linked list to the next line
 */
typedef struct listint_s
{
int n;
struct listint_s *next
listint_t
}
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint(listint_t *head, unsigned int index);int sum_listint(lintint_t *head);
listint_t *get_nodeint(listint_t **head,unsigned int idx, int n);
int delete_nodeint(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);

#endif
