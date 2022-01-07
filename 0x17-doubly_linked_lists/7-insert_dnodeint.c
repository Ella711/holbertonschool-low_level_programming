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
	dlistint_t *current = *h, *new_node = NULL, *ahead = NULL;

	if (h)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		if (idx == 0)
			return (add_dnodeint(h, n));
		if (idx != 0 && current == NULL)
			return (NULL);
		while ((idx != 1) && (current->next != NULL))
		{
			current = current->next;
			idx--;
		}
		if (current->next == NULL)
		{
			if (idx > 1)
				return (NULL);
			return (add_dnodeint_end(h, n));
		}
		else
		{
			ahead = current->next;
			current->next = new_node;
			ahead->prev = new_node;
			new_node->next = ahead;
			new_node->prev = current;
			return (new_node);
		}
	}
	return (NULL);
}

