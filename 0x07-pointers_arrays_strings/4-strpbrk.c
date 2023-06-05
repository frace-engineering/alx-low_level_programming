#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the input string
 * @accept: bytes to be searched for
 * Return: pointer to the first occurance of byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	p = s;
	while (p != NULL)
	{
		if (*p != *accept)
		{
			while (*accept != *p)
			{
				accept++;
			}
		}
		else
			return (--p);
		p++;
	}
	return (0);
}
