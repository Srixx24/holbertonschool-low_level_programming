#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the
 * end of a list_t list.
 *
 * @head: head
 * @str: string
 *
 * Return:
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return NULL;
	}

	new->next = *head;

	*head = new;

	return (new);
}
