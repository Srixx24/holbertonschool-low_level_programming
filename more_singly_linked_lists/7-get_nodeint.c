#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 *
 * @head: head
 * @index: index
 *
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int node;
	
	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return(head)
}
