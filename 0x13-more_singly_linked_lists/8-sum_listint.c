#include "lists.h"
#include <stdlib.h>


/**
 * sum_listint - calculates the sum of all the data of a listint_t
 * @head: pointer to the head node
 *
 * Return: summ of the data
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
