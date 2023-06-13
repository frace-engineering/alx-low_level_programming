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
 * str_concat - concatenates two strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 *
 * Return: pointer to the duplicate copy
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *ptr;
	int string_len;
	int string_len1, string_len2;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);
	string_len1 = _strlen(s1);
	string_len2 = _strlen(s2);

	string_len = string_len1 + string_len2;
	ptr = malloc(sizeof(char) * string_len + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = string_len1; i < string_len; i++)
	{
		ptr[i] = *s2++;
	}
	ptr[i] = '\0';
	return (ptr);
}
