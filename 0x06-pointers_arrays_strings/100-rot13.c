#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * _strlen - calculate length of string
 * @str: string
 * Return: pointer to len
 */
int _strlen(char *str)
{
	int i;
	int len;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len += 1;
	}
	return (len);
}

/**
 * rot13 - encodes strings using rot13
 * @str: string
 * Return: pointer to str
 */
char *rot13(char *str)
{
	char letter;
	int i;
	int length;


	length = _strlen(str);
	printf("%d\n", length);
	for (i = 0; i < length; i++)
	{
		letter = str[i];
		if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
		{
			str[i] += 13;
		}
	}
	return (str);
}
