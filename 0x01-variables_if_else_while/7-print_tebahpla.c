#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success
 */
int main(void)
{
	char rev_alpha;

	rev_alpha = 'z';
	while (rev_alpha >= 'a')
	{
		putchar(rev_alpha);
		rev_alpha--;
	}
	putchar('\n');
	return (0);
}

