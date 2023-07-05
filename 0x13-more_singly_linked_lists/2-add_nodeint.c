#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add new node at the beginning of a listint_t list
 * @head: pointer to the head node
 * @n: integer
 *
 * Return: return pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
