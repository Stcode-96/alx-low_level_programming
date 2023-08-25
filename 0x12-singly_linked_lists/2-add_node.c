#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - Calculates string length.
 * @s: Input string.
 *
 * Description: Counts characters until null terminator.
 *
 * Return: Length of the string (excluding null terminator).
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node-add a new node at the start of a list.
 * @head: head of a list.
 * @str: input value for element.
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	unsigned int len = 0;

	while (str[len])
		len++;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = (*head);
	(*head) = add;

	return (add);
}
