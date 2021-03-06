#include "lists.h"

/**
 * get_dnodeint_at_index - adds node at end of list
 * @head: pointer to head of list
 * @index: position of node wanted
 * Return: pointer to indexed node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index != 0 && head != NULL)
	{
		head = head->next;
		index--;
	}
	return (head);
}

