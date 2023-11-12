#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *cur;

	while (head)
	{
		cur = head;
		head = head->next;
	}

	free(cur);
	free(head);
}
