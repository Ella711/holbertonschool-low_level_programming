#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at index
 * @h: pointer to head of list
 * @idx: index to add new node
 * @n: data
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node = NULL;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		free(new_node);
		return (add_dnodeint(h, n));
	}
	while (i < idx - 1)
	{
		current = current->next;
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	new_node->prev = current;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}

