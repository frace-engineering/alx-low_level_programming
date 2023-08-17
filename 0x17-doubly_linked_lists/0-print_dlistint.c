#include "lists.h"

/**
 * print_dlistint - print the items of a linked list
 * @h: point to the head node
 *
 * Description: print the items of a doubly linked list
 *
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}
