#include "lists.h"

/**
 * sum_dlistint - add the data in a linked list
 * @head: point to the head node
 *
 * Description: sum the data of the doubly linked list
 *
 * Return: the sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
