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

	if (head == NULL || *head == NULL)
		return;

	cur = *head;

	while (cur != NULL)
	{
		temp = cur;
		cur = cur->next;
		free(temp);

	}

	*head = NULL;
}
