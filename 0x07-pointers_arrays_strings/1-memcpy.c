#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to be copied from src to dest
 * Return: pointer to dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (src == NULL || n <= 0)
		return (0);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
