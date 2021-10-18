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
	while (n > 0)
	{
		*dest = *src;
		dest++, src++, n--;
	}
	return (dest);
}

