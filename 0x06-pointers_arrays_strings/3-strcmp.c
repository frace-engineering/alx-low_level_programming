#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, -1 if s1 is less than s2 else 1
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
	{
		if (s1 != s2)
		{
			return (*s1 - *s2);
		}
	}
	return (0);
}
