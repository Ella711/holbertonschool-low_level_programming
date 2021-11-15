#ifndef LINKED_LISTS_HEADER
#define LINKED_LISTS_HEADER
/* Define libraries */
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* prints all the elements of a listint_t list */
size_t print_listint(const listint_t *h);


#endif /* LINKED_LISTS_HEADER */

