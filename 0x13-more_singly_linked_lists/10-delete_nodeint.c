#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to list
 * @index: index position
 * Return: list pointer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *traverse, *delete_node;

	traverse = *head;
	delete_node = *head;

	if (*head == NULL)
		return (-1);

	if (index == 1 || index == 0)
	{
		*head = traverse->next;
		free(traverse);
		traverse = NULL;
	}
	else
	{
		while (index != 1)
		{
			traverse = delete_node;
			delete_node = delete_node->next;
			index--;
		}
		traverse->next = delete_node->next;
		free(delete_node);
		delete_node = NULL;
	}
	return (1);
}

