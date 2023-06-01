#include <stdio.h>
#include "main.h"


/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: pointer to str
 */
char *leet(char *str)
{
	int i, j;

	char sc[] = {'A', 'E', 'O', 'T', 'L'};
	char rep[] = {4, 3, 0, 7, 1};

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == sc[j] || str[i] - 32 == sc[j])
			{
				str[i] =  rep[j];
			}
		}
		i++;
	}
	return (str);
}
