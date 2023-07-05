#include "lists.h"


/**
 * listint_len - returns the number of elements in a list
 * @h: pointer to head node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t y;

	y = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		y++;
	}
	return (y);
}
