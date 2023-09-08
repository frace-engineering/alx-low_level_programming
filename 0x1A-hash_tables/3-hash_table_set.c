#include "hash_tables.h"


/**
 * hash_table_set - add an element to the hash table
 * @ht: pointer to the hash table
 * @key: pointer to hash key
 * @value: pointer to hash value
 *
 * Return: 1 on success else return 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int size, idx;

	if (ht == NULL || key == NULL)
		return (0);
	size = ht->size;
	idx = key_index((const unsigned char *)key, size);
	if (ht->array[idx] != NULL && strcmp(ht->array[idx]->key, key) == 0)
	{
		ht->array[idx]->value = strdup(value);
		return (1);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
