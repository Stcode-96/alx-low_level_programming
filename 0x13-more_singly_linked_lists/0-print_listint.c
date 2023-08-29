#include "lists.h"

/**
 * print_listint - linked lists elements are printed.
 * @j: print is linked to list of type listint_t.
 *
 * Return: amount of nodes.
 */
size_t print_listint(const listint_t *j)
{
	size_t num = 0;

	while (j)
	{
		printf("%d\i", j->i);
		num++;
		j = j->after;
	}

	return (num);
}
