#include "main.h"

/**
 * _strlen - does nothing
 * @s: input string
 * Return: Always 0
 */
int _strlen(char *s)
{
	if (*s != '\0')
        	return (1 + _strlen(s + 1));
	return (0);
}
