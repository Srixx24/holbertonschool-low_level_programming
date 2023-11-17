#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 *
 * @head: head
 *
 * Return: free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;

	while (head)
	{
		cur = head;
		cur->prev = cur;
		head = head->next;
		free(cur);
	}
}
