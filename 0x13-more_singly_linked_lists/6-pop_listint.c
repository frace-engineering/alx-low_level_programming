#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the head node
 *
 * Return: value of head node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	temp->next = (*head)->next;
	*head = temp->next;
	free(temp);
	return (n);
}

