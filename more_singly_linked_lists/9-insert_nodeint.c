#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 *
 * @head: head
 * @idx: index
 * @n: new
 *
 * Return: new or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int x;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		new = *head;
	}

	while (x < idx - 1)
	{
		if (temp != NULL)
		{
			temp = temp->next;
			x++;
		}
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
