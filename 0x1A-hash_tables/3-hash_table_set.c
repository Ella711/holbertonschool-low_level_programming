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
	char *value_copy = NULL;
	char *key_copy = NULL;

	if (!ht || !key)
		return (0);

	key_node = malloc(sizeof(hash_node_t));
	if (!key_node)
		return (0);

	value_copy = strdup(value);
	key_copy = strdup(key);

	key_node->key = key_copy;
	key_node->value = value_copy;
	key_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
		key_node->next = ht->array[index];
	ht->array[index] = key_node;

	return (1);


}

