#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwats 0 (Success)
 */
int main(void)
{
	int comb;

	comb = 0;
	while (comb < 10)
	{
		putchar(comb + '0');
		if (comb < 9)
		{
			putchar(',');
			putchar(' ');
		}
		comb++;
	}
	putchar('\n');
	return (0);
}
