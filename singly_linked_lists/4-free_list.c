#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: head
 *
 * Return: free
 */
void free_list(list_t *head)
{
	list_t *cur = head;
	list_t *next;

	while (cur != NULL)
	{
		next = cur->next;
		free(cur->value);
		free(cur);
		cur = next;
	}
}
