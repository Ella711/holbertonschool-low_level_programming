#include "hash_tables.h"
/**
 * hash_table_set - adds an element to a hash table
 * @ht: pointer to hash table
 * @key: string of key
 * @value: value for key
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *key_node = NULL;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	key_node = ht->array[index];

	while (key_node)
	{
		if (strcmp(key, key_node->key) == 0)
		{
			free(key_node->value);
			key_node->value = strdup(value);
			return (1);
		}
		key_node = key_node->next;
	}

	key_node = malloc(sizeof(hash_node_t));
	if (!key_node)
		return (0);

	key_node->value = strdup(value);
	key_node->key = strdup(key);

	if (ht->array[index] != NULL)
		key_node->next = ht->array[index];
	ht->array[index] = key_node;

	return (1);


}

