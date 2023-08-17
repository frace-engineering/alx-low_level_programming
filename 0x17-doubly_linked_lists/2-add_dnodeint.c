#include "lists.h"

/**
 * add_dnodeint - add new node
 * @head: point to the head node
 * @n: integer
 *
 * Description: add new node at the beginning of the doubly linked list
 *
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
		new_node->prev = NULL;
	}
	return (new_node);
}
