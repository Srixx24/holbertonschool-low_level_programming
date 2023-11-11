#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 *
 * @h: header
 *
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}
	else
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
	}

	return (count);
}
