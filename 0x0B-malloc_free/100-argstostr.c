#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"


/**
 * argstostr -concatenates all the arguments of a program
 * @ac: number of arguments
 * @av: pointer to array of arguments
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, string_len, total_len;
	char *ptr, *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		string_len = strlen(av[i]);
		total_len += string_len;
	}
	concatenated = malloc(sizeof(*concatenated) * total_len + 1);
	if (concatenated == NULL)
		return (NULL);
	ptr = concatenated;
	for (i = 1; i < ac; i++)
	{
		string_len = strlen(av[i]);
		for (j = 0; j < string_len; j++)
		{
			*ptr = av[i][j];
			printf("%c", *ptr);
			ptr++;
		}
		printf("\n");
	}
	*ptr = '\0';
	return (concatenated);
}
