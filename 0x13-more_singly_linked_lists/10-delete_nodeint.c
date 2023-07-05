#include "lists.h"
#include <stdlib.h>



/**
 * delete_nodeint_at_index - deletes the node at a given index os a list
 * @head: pointer to head node
 * @index: given index
 *
 * Return: 1 on seccess else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	prev = *head;
	current = (*head)->next;
	i = 1;
	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);
	return (1);
}


