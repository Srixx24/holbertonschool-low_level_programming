#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * @head: head
 *
 * Return: head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->x;
	*head = (*head)->next;

	free(temp);
	return (n);
}
