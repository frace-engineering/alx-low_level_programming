#include <stdio.h>
#include "main.h"


/**
 * cap_string - capitalize all words of a string
 * @str: the string
 * Return: pointer to the str
 */
char *cap_string(char *str)
{
	char sep[13] = {'.', ' ', '\t', '\n', ',', ';', '!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	i = 1;
	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if ((str[i - 1] == sep[j]) && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
