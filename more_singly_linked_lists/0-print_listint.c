#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * of a listint_t list.
 *
 * @h: h
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->x);
		h = h->next;
		count++;
	}

	return (count);
}
