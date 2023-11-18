#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head
 * @idx: index
 * @n: number
 *
 * Return: new or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int x = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = new;
		new->next = *h;
		*h = new;
		return (new);
	}
	temp = *h;

	while (temp != NULL && x < idx - 1)
	{
		temp = temp->next;
		x++;
	}

	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	new->prev = temp;

	return (new);
}
