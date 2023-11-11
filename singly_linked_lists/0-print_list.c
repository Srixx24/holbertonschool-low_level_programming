#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h:
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		printf("%d", h);
		
		h = h->next;
		count++;
	}

	return (count);
}
