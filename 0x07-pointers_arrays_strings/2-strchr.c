#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * _strchr - locates a character in a string
 * @s: the input string
 * @c: character to be searched for
 * Return: pointer to the first occurance of c
 */
char *_strchr(char *s, char c)
{
	char *p;

	if (s == NULL)
		return (NULL);
	p = s;
	while (*p != c)
	{
		if (*p == '\0')
			return (NULL);
		p++;
	}
	return (p);
}

