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
	listint_t *prev = NULL;
	listint_t *cur = *head;
	unsigned int x = 0;

	if (head == NULL || *head == NULL || cur == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (-1);
	}

	while (cur != NULL && x < index)
	{
		prev = cur;
		cur = cur->next;
		x++;
	}

	prev->next = cur->next;
	free(cur);
	return (-1);
}
