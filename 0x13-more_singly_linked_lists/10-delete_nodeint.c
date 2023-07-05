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
	listint_t *temp;
	listint_t *del;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = del = *head;
	i = 1;
	while (del != NULL && temp->next != NULL && i < index)
	{
		temp = temp->next;
		del = del->next;
		i++;
	}
	if (i < index)
		return (-1);
	del->next = temp->next;
	free(temp);
	return (1);
}


