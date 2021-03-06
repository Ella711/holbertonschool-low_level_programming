#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of table
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	hash_node_t **hash_index = NULL;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_index = malloc(sizeof(*hash_index) * size);
	if (!hash_index)
	{
		free(hash_table);
		return (NULL);
	}

	while (i < size)
	{
		hash_index[i] = NULL;
		i++;
	}

	hash_table->size = size;
	hash_table->array = hash_index;

	return (hash_table);

}

