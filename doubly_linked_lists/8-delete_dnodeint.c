#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at
 * index index of a dlistint_t linked list
 *
 * @head: head
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;
	dlistint_t *prev = NULL;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		if (*head != NULL)
			(*head)->prev = NULL;
		cur = *head;
		*head = (*head)->next;
		free(cur);
		return (1);
	}
	cur = *head;

	while (cur)
	{
		if (x == index)
		{
			prev->next = cur->next;
			if (cur->next != NULL)
				cur->next->prev = prev;
			free(cur);
			return (1);
		}
		prev = cur;
		cur = cur->next;
		x++;
	}

	return (-1);
}
