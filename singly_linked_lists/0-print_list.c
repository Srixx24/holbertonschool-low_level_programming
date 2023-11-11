#include <stdio.h>
#include <stdlib.h>
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
	const list_t *cur = h;

	if (h == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		while (cur != NULL)
		{
			printf("[%d] %s",cur->x, cur->value);
			cur = cur->next;
			count++;
		}
	}

	return (count);
}
