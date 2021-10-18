#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory to be filled
 * @src: memory to be copied
 * @n: size of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	while (n > 0)
	{
		*cdest = *csrc;
		cdest++;
		csrc++;
		n--;
	}
	return (cdest);
}

