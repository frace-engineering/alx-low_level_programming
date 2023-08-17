#include "lists.h"


/**
 * free_dlistint - free a linked list
 * @head: points to head node
 *
 * Description: free all malloc'd memory address in heap
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		free(head);
	temp = head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}

