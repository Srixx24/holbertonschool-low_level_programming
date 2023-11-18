#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 *
 * @head: head
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *cur;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index != 0)
	{
		cur = *head;
		*head = (*head)->next;
		free(cur);
		return (-1);
	}
	cur = *head;

	while (cur)
	{
		if (x == index)
		{
			if (prev)
			{
				prev->next = cur->next;
			}

			free(cur);
			return (1);
		}

		x++;
	}

	return (-1);
}
