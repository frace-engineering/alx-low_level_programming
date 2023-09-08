#include "hash_tables.h"

/**
 * hash_table_create  - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the hash table else NULL on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	table_t *hashTable;
	unsigned long i;

	Table = malloc(sizeof(hash_table_t));
	if (Table == NULL)
		return (NULL);
	table->array = malloc(size * sizeof(hash_table_t));
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->size = size;
}
