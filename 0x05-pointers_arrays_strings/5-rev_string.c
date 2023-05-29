#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * rev_string - reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	int rev, i, string_len, temp;

	string_len = 0;
	i = 0;
	while (s[i] != '\0')
	{
		string_len += 1;
		i++;
	}
	for (rev = 0; rev < (string_len / 2); rev++)
	{
		temp = s[rev];
		s[rev] = s[string_len - rev - 1];
		s[string_len - rev - 1] = temp;
	}
}
