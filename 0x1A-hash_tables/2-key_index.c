#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: string used as key for hash table
 * @size: size of array for hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c;
	}

	hash = hash % size;

	return (hash);
}

