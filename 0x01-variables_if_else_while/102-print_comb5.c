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
	int comb4;

	comb = 0;
	while (comb < 10)
	{
		comb2 = 0;
		while (comb2 < 10)
		{
			comb3 = 0;
			while (comb3 < 10)
			{
				comb4 = 1;
				while (comb4 < 10)
				{
					if (((comb + comb2) != (comb3 + comb4)))
					{
						putchar(comb3 + '0');
						putchar(comb4 + '0');
						putchar(' ');
						putchar(comb + '0');
						putchar(comb2 + '0');
						if ((comb != 9) || (comb2 != 8) || (comb3 != 9) || (comb4 != 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
					comb4++;
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
