#include <stdio.h>
#include "main.h"


/**
 * _strncat - concatenates strings up to nth character
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied int dest
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, count;

	count = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		count += 1;
	}
	for (j = 0; ((j < n) && (src[j] != '\0')); j++)
	{
		dest[count + j] = src[j];
	}
	dest[count + j] = '\0';

	return (dest);
}
