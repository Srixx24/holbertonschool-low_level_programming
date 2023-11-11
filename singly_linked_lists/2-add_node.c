#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node -
 *
 * @head: head
 * @str: string
 *
 * Return: 
 */
list_t *add_node(list_t **head, const char *str)
{
	struct new;

	if (str == NULL)
		return NULL;
	
	new = malloc(sizeof(new));
	new->value = str;

	new->next = **head;

	**head = new
}
