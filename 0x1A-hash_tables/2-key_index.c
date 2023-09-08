#include "hash_tables.h"

/**
 * key_index - hashes the index of a key at which value can be stored
 * @key: given key
 * @size: size of hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
