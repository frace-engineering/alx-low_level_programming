#include "lists.h"
#include <stdlib.h>


/**
 * free_listint - frees a listint_t list
 * @head: pointer to head node
 *
 * Return: Voide
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
