#include "lists.h"
#include <stdlib.h>



/**
 * insert_nodeint_at_index - insert node at a given index
 * @head: pointer to head node
 * @idx: given index
 * @n: integer
 *
 * Return: pointer to the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nodeAtIndex;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	nodeAtIndex = malloc(sizeof(listint_t));
	if (nodeAtIndex == NULL)
		return (NULL);
	nodeAtIndex->n = n;
	i = 1;
	while (i < idx && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i < idx)
		return (NULL);
	nodeAtIndex->next = temp->next;
	temp->next = nodeAtIndex;
	return (nodeAtIndex);
}
