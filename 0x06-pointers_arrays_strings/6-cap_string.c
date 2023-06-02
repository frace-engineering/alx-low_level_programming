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
	char up;

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			while (sep[j])
			{
				for (up = 'a'; up <= 'z'; up++)
				{
					if (str[i] == up)
					{
						str[i] = up - 32;
					}
				}
				j++;
			}
		}
		i++;
	}
	return (str);
}
