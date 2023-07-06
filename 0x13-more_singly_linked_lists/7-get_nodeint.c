#include "lists.h"
#include <stdlib.h>


/**
 * get_nodeint_at_index - get the node at a given index
 * @head: pointer to the head node
 * @index: given index
 *
 * Return: pointer to the node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	i = 1;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
		if (i == index)
			return (temp);
	}
	if (i < index)
		return (NULL);
	return (temp);
}
