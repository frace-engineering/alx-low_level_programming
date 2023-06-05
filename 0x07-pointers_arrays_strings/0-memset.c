#include <stdio.h>
#include <string.h>


/**
 * _memset - fills the memory with a given character
 * @s: pointer to the string of characters
 * @b: given character
 * @n: number of times to repeat n
 * Return: pointer to the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (s);
}
