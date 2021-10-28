#include "main.h"


/**
 * malloc_checked - allocates memory using malloc
 * exit: 98
 */

void *malloc_checked(unsigned int b)
{
	void *allocMem = malloc(sizeof *allocMem * b);
	if (allocMem = NULL)
		exit(98);
}