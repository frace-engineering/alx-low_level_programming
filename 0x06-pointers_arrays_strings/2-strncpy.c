#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * _strncpy - copies strings up to nth character
 * @dest: destination buffer
 * @src: source string
 * @n: number of characters to be copied int dest
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; ((j < n) && (src[j] != '\0')); j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
