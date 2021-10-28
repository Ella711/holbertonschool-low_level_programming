#include "main.h"


/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 * Return: allocmem
 */

void *malloc_checked(unsigned int b)
{
	int *allocMem = malloc(b);

	if (allocMem == NULL)
		exit(98);
	return (allocMem);
}

