#include "lists.h"

/**
 * add_dnodeint_end - add new node
 * @head: point to the head node
 * @n: integer
 *
 * Description: add new node at the end of the doubly linked list
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node, *temp;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
		return (NULL);
	temp = *head;
	end_node->n = n;
	if (*head == NULL)
	{
		end_node->next = NULL;
		*head = end_node;
		end_node->prev = NULL;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = end_node;
		end_node->prev = temp;
		end_node->next = NULL;
	}
	return (end_node);
}
