#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: point to the head node
 * @idx: integer
 * @n: integer
 *
 * Description: insert a node at a given index of a doubly linked list
 *
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *h;
	count = 0;
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		++count;
	}
	if (count == idx - 1)
	{
		if (temp->next != NULL)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			new_node->prev = temp;
		}
		if (*h == NULL)
		{
			*h = new_node;
			new_node->next = NULL;
		}
		if (temp->next == NULL)
		{
			temp->next = new_node->next;
			new_node->prev = temp;
			temp->next = new_node;
		}
		return (new_node);

	}
	return (NULL);
}
