#include <stdio.h>
#include "lists.h"


/**
 * print_list - print list items
 * @h: pointer to head node of the list
 *
 * Return: number of items printed
 */
size_t print_list(const list_t *h)
{
	size_t num;

	if (h == NULL)
		return (0);
	num = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		num++;
	}
	return (num);
}

