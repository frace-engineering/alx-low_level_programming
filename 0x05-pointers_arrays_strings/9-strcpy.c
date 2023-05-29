#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * _strcpy - copies string from src to dest
 * @dest: destination buffer
 * @src: source string
 * Return: pointer of type char to dest
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

