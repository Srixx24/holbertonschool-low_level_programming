#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the
 * end of a list_t list.
 *
 * @head: head
 * @str: string
 *
 * Return: new or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *cur = *head;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->len = strlen(str);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (cur->next != NULL)
		{
			cur = cur->next;
		}

		cur->next = new;
	}

	return (new);
}
