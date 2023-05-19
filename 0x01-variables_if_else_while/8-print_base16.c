#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	
	int hex;
	char c;

	c = 'a';
	hex = 0;
	while(hex < 10)
	{
		putchar(hex + '0');
		hex++;
	}
	while(c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
