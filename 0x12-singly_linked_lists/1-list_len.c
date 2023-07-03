#include <stdio.h>
#include "lists.h"


/**
 * list_len - Calculates the number of items in a list
 * @h: pointer to head node
 *
 * Return: number of items in the list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
