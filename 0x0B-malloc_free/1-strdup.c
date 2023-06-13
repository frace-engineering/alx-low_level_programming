#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strlen - returns the length of the string
 * @s: pointer to string
 * Return: count
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count += 1;
	return (count);
}

/**
 * _strdup - returns a pointer to a newly allocated memory, which
 * contains a copy of the string given as a parameter
 * @str: pointer to given string
 *
 * Return: pointer to the duplicate copy
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;
	int string_len;

	if (str == NULL)
		return (NULL);
	string_len = _strlen(str);

	ptr = malloc(sizeof(char) * string_len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < string_len; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
