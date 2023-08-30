#include "lists.h"

/**
 * free_listint - undounds a linked list.
 * @head: unbounded list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free (head);
		head = temp;
	}
}
