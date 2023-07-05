#include "lists.h"


/**
 * print_listint - prints the elements of a list
 * @h: pointer to head node
 *
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t y;

	y = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		y++;
	}
	return (y);
}
