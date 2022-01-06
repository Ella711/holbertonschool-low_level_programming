#include "lists.h"

/**
 * add_dnodeint_end - adds node at end of list
 * @head: pointer to head of list
 * @n: int
 * Return: pointer to head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *traverse;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		traverse = *head;
		while (traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = new_node;
		new_node->prev = traverse;
	}

	return (*head);
}

