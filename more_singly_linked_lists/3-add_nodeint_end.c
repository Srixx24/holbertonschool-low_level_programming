#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 *
 * @head: head
 * @n: new
 *
 * Return: new or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t cur;

	if (new == NULL)
		return (NULL);

	new->x = n;
	new->next =NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		cur = *head;
		while (cur->next != NULL)
		{
			cur = cur-next;
		}
	}

	return (new);
}
