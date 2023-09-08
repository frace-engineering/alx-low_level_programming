#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: is the key you are looking for
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int size, idx;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);
	size = ht->size;
	idx = key_index((const unsigned char *)key, size);
	temp = ht->array[idx];
	if (temp != NULL)
	{
		while (strcmp(strdup(key), temp->key) != 0 || temp->next != NULL)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
		else
			return (temp->value);
	}
	else
		return (NULL);
}
