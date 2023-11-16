#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a dlistint_t list.
 *
 * @head: head
 * @n: number
 *
 * Return: new or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
