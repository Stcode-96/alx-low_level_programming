#include "lists.h"

/**
 * listint_len - linked list elements
 * @h: traverse list
 *
 * Return: amount of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
