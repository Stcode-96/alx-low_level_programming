#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of a list_t list.
 * @head: Pointer to the list's head pointer
 * @str: String to be added to the new node
 *
 * Description: Adds a new node with a copy of @str to the end of the list.
 *
 * Return: Pointer to the new node, or NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *add;
	list_t *temp = *head;

	while (str[len])
		len++;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);

	add->str = strdup(str);
	add->len = len;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = add;

	return (add);
}
