#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strlen - calculate string length
 * @s: input string
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int i, count;

	for (i = 0; s[i] != '\0'; i++)
		count += 1;
	return (count);
}
/**
 * string_nconcat - concatenates 2 strings
 * @s1: first input string
 * @s2: second input string
 * @n: number of char to be copied from s2 to s1
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, s, k;
	char *ptr;

	s = k = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s = _strlen(s1);
	k = _strlen(s2);
	ptr = malloc(sizeof(char) * (s + k));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; ((j < n) && (s2[j] != '\0')); j++)
		ptr[i + j] = s2[j];
	ptr[i + j++] = '\0';
	return (ptr);
}
