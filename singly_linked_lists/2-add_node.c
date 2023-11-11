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
	if (str == NULL)
		return NULL;
	
	struct node *head = malloc(sizeof(struct node));
	head->value = str;

	head->next = **head;

	**head = head
}
