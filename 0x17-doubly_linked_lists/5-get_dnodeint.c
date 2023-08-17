#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at index
 * @head: point to the head node
 * @index: integer
 *
 * Description: get the node at a given index of a doubly linked list
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	size_t count;

	if (head == NULL)
		return (NULL);
	count = 0;
	temp = head;
	while (temp != NULL && count != index)
	{
		count += 1;
		temp = temp->next;
	}
	return (temp);
}
