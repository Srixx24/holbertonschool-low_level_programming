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
	list_s *new;
	
	if (str == NULL)
		return NULL;

	new = malloc(sizeof(list_s));
	if (new == NULL)
		return (NULL);

	new->value = strdup(str);
	
	new->next = *head;

	*head = new;
	
	return (new);
}
