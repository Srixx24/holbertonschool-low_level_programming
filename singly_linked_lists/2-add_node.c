#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the
 * beginning of a list_t list.
 *
 * @head: head
 * @str: string
 *
 * Return: 
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	
	if (str == NULL)
		return NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->value = strdup(str);

	if (new->value == NULL)
		return (NULL);

	new->next = *head;

	*head = new;
	
	return (new);
}
