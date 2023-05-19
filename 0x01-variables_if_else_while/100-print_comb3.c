#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwats 0 (Success)
 */
int main(void)
{
	int comb;
	int comb2;

	comb = 0;
	while (comb < 9)
	{
		comb2 = 1;
		while (comb2 < 10)
		{
			if (comb < comb2)
			{
				putchar(comb + '0');
				putchar(comb2 + '0');
				if ((comb != 8) || (comb2 != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
			comb2++;
		}
		comb++;
	}
	putchar('\n');
	return (0);
}
