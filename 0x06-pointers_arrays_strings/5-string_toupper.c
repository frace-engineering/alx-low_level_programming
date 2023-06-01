#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * string_toupper - changes lowercase letters of string to uppercase
 * @str: string
 * Return: Always 0 (Success)
 */
char *string_toupper(char *str)
{
	int i;
	char up;

	i = 0;
	while (str[i])
	{
		for (up = 'a'; up <= 'z'; up++)
		{
			if (str[i] == up)
			{
				str[i] = up - 32;
			}
		}
		i++;
	}
	return (str);
}
