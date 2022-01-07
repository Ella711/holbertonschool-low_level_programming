#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to head of list
 * @index: index to delete node
 * Return: 1 if success, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	while ((index != 0) && (current->next != NULL))
	{
		current = current->next;
		index--;
	}

	if (index == 0)
	{
		current->prev->next = current->next;
		if (current->next != NULL)
			current->next->prev = current->prev;
		free(current);
		return (1);
	}
	return (-1);
}

