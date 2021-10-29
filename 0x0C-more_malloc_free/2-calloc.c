#include "main.h"

/**
* _calloc - allocates memory and is set to 0
*@nmemb: number of elements
*@size: type of element
*Return: pointer with memory assigned
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *fakecalloc;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	fakecalloc = malloc(size * nmemb);
	if (fakecalloc == NULL)
		return (NULL);

	for (; i < (nmemb * size); i++)
		fakecalloc[i] = 0;
	return (fakecalloc);

}

