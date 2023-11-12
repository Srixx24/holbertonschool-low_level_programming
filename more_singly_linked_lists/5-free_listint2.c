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

	while (head != NULL)
	{
		cur = *head;
		*head = (*head)->next;
		free(cur);
	}

	*head = NULL;
}
