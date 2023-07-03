#include <stdlib.h>
#include "lists.h"



/**
 * free_list - free the memory allocated for the list
 * @head: pointer to head node
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *temp;


	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head);
}

