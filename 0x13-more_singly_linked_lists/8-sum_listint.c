#include "lists.h"

/**
 * sum_listint-total of all data.
 * @head: top node.
 *
 * Return: Total.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
