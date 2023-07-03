#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"



/**
 * add_node_end - add new node at the end of a list
 * @head: double pointer to the head node
 * @str: pointer to string constant member of the list
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastNode = NULL;
	list_t *temp;

	lastNode = malloc(sizeof(list_t));
	if (lastNode == NULL)
		return (NULL);

	temp = *head;
	lastNode->str = strdup(str);
	lastNode->len = strlen(str);
	if (temp == NULL)
	{
		*head = lastNode;
		lastNode->next = NULL;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = lastNode;
		lastNode->next = NULL;
	}
	return (lastNode);
}




