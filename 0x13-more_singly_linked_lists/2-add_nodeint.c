#include "lists.h"

/**
 * add_nodeint - linked list is furnished with a new a line at the beginning.
 * @head: shows the first node in the list.
 * @n: data to insert in the new node.
 *
 * Return: shows the new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if(!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
