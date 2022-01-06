#include "lists.h"

/**
 * sum_dlistint - adds data from all nodes on list
 * @head: pointer to head of list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

