#include "lists.h"

/**
 * dlistint_len - calculates number of nodes in linked list
 * @h: point to the head node
 *
 * Description: calulates the length of a doubly linked list
 *
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
