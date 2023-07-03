#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"



/**
 * add_node - add new node at the start of a list
 * @head: double pointer to head node
 * @str: pointer to string member of the list
 *
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}




