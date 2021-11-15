#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to list
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head->n);
		free(head);
		head = head->next;
	}
}