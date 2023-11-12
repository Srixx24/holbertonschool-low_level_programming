#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *cur;
	listint_t *next;

	if (head == NULL)
		return;

	cur = *head;

	while (cur != NULL)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}

	*head = NULL;
}
