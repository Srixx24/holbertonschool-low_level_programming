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
	listint_t *temp;
	int count = 0;


	cur = *head;

	while (cur != NULL)
	{
		if (cur->x < 0)
		{
			next = cur->next;
			free(cur);
			cur = *head;
		}
		else
		{
			temp = cur;
			cur = cur->next;
			free(cur);
		}
		count++;
	}

	*head = NULL;
}
