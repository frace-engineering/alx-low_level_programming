#include <stdio.h>
#include "main.h"


/**
 * is_palindrome - checks if a string is a plindrome
 * @s: input string
 * Return: 1 if string is a palindrome else 0
 */
int is_palindrome(char *s)
{
	int len;
	int i;

	i = 0;
	len = _strlen_recursion(s);
	if (!len / 2)
		return (0);
	if (s[i] != s[len -i - 1])
	{
		return (0);
	}
	if (s[i] == s[len -i - 1])
	{
		return (1);
	}
	i++;
	return (is_palindrome(s + 1));
}


/**
 * _strlen_recursion - returns the length of a srting
 * @s: pointer to a string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
