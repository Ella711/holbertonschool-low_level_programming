#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer to list
 * @index: int index of the node
 * Return: head pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverse;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	traverse = head;

	while (count < index)
	{
		traverse = traverse->next;
		count++;
	}

	if (count == index)
		return (head);

	return (traverse);
}

