#include <stdio.h>
#include "main.h"


/**
 * is_palindrome - checks if a string is a plindrome
 * @s: input string
 * Return: 1 if string is a palindrome else 0
 */
int is_palindrome(char *s)
{
	int i, n, len;

	len = 0;
	for (n = 0; s[n] != '\0'; n++)
		len += 1;

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] == s[len - i -1] || s == NULL)
		{
			n = 1;
		}
		else
		{
			n = 0;
		}
	}
	return (n);
}
