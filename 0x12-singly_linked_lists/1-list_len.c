#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Description: This function counts the number of elements in the provided
 * list by traversing through each node while incrementing the count.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
