#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * _strlen - Count the length of a string
 * @s: pointer to the string
 * Return: string length
 */
int _strlen(char *s)
{
	int i;
	int string_len;

	i = 0;
	string_len = 0;
	while (s[i] != '\0')
	{
		string_len += 1;
		i++;
	}
	return (string_len);
}
