#include "lists.h"

/**
 * print_listint - linked lists elements are printed.
 * @h: print is linked to list of type listint_t.
 *
 * Return: amount of nodes.
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
