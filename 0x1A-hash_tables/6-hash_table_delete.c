#include "hash_tables.h"


/**
 * hash_table_delete - prints the key value pair of a hash table
 * @ht: pointer to the hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	hash_node_t *hold;


	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			hold = temp;
			temp = temp->next;
			free(hold->key);
			free(hold->value);
			free(hold);
		}
	}
	free(temp);
	free(ht->array);
	free(ht);
}

