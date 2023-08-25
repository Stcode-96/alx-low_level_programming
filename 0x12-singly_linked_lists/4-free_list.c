#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list and its data.
 * @head: Pointer to the beginning of the list.
 *
 * Description: Dettach memory used by the linked list nodes and their strings.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
