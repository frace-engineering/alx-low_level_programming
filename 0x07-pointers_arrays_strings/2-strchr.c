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

	p = s;
	while (p != NULL)
	{
		if (*p == c)
			return (p);
		p++;
	}
	return (p);
}
