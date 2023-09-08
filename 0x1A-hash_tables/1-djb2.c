#include "hash_tables.h"

/**
 * hash_djb2 - function implementing the djb2 algorithm
 * @str: String
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int ch;

	hash = 5459;
	while ((ch = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
