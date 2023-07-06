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

	nodeAtIndex = malloc(sizeof(listint_t));
	if (nodeAtIndex == NULL)
		return (NULL);
	nodeAtIndex->n = n;
	if (*head == NULL)
	{
		(*head)->next = nodeAtIndex;
		nodeAtIndex->next = NULL;
		return (nodeAtIndex);
	}
	i = 0;
	temp = *head;
	while (i < idx - 1 && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (idx == 0)
	{
		nodeAtIndex->next = (*head)->next;
		(*head)->next = nodeAtIndex;
		return (nodeAtIndex);
	}
	nodeAtIndex->next = temp->next;
	temp->next = nodeAtIndex;
	return (nodeAtIndex);
}
