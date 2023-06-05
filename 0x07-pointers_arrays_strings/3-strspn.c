#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * strchr - locates a character in a string
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
/**
 * _strspn - calculates the length of a prefix substring
 * @s: given string
 * @accept: substring to be searched out
 * Return: length of the string for first occurance of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	char *p;

	len = 0;
	while (*s != '\0')
	{
		p = _strchr(s, *accept);
		s++;
	}
	while (*p != '\0')
	{
		len += 1;
		p++;
	}
	return len;
}
