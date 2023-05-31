#include <stdio.h>
#include "main.h"


/**
 * _strcat - concatenates strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, count;

	count = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		count += 1;
	}
	count = count - 1;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[count + j] = src[j];
	}
	dest[count + j] = '\0';

	return (dest);
}
