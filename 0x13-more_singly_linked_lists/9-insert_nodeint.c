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

	temp = *head;
	nodeAtIndex = malloc(sizeof(listint_t));
	if (nodeAtIndex == NULL)
		return (NULL);
	nodeAtIndex->n = n;
	if (*head == NULL)
	{
		*head = nodeAtIndex;
		nodeAtIndex->next = NULL;
		return (nodeAtIndex);
	}
	i = 1;
	while (i < idx && temp->next != NULL)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			temp = nodeAtIndex;
			nodeAtIndex->next = NULL;
			return (nodeAtIndex);
		}
		i++;
	}
	if (idx == 0)
	{
		*head = nodeAtIndex;
		nodeAtIndex->next = NULL;
		return (nodeAtIndex);
	}
	nodeAtIndex->next = temp->next;
	temp->next = nodeAtIndex;
	return (nodeAtIndex);
}
