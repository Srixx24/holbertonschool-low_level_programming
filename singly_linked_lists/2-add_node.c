#include <stdio.h>
#include <stdlib.h>
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
	node new;

	if (str == NULL)
		return NULL;
	
	list_t new = malloc(sizeof(list_t));
	new->value = str;

	new->next = *head;

	*head = new
	
	return (new);
}
