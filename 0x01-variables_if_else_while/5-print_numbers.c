#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;

	f = 0;
	while(f < 10)
	{
		printf("%d", f);
		f++;
	}
	printf("\n");
}
