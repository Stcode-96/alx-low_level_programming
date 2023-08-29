#ifndef lists_h
#define lists_h

#include <stdio.h>
#include <stdlib..h>

/**
 * struct listint_s - singly linked lis
 * @i: integer
 * @after: point to the suceeding node
 *
 * Description: list node structure.
 */
typedef struct listint_s
{
	int i;
	struct listint_s*after;
} listint_t;

size_t print_listint(const listint_t*h);
size_t listint_len(const listint_t*h);
listint_t*add_nodeint(listint_t**head, const int n);
listint_t*add_nodeint_end(listint_t**head, const int n);
void free_listint(listint_t*head);
void free_listint2(listint_t**head);
int pop_listint(listint_t**head);
listint_t*get+nodeint_at_index(listint_t*head, unsigned int index);
int sum_listint(listint_t*head);
listine_t*insert_nodeint_at_index(listint_t**head, unsigned int index);
int delete_nodeint_at_index(listint_t**head, unsigned int index);

#endif
