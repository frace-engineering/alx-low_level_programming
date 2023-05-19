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
	int comb3;

	comb = 0;
	while (comb < 8)
	{
		comb2 = 1;
		while (comb2 < 9)
		{
			comb3 = 2;
			while (comb3 < 10)
			{
				if ((comb < comb2) && (comb2 < comb3))
				{
					putchar(comb + '0');
					putchar(comb2 + '0');
					putchar(comb3 + '0');
					if ((comb != 7) || (comb2 != 8) || (comb3 != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				 comb3++;
			}
			 comb2++;
		}
		comb++;
	}
	putchar('\n');
	return (0);
}
