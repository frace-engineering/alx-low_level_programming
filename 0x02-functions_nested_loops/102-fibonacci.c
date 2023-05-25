#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fib1, fib2, i, temp, fib;

	fib1 = 1;
	fib2 = 2;
	printf("%d, %d, ", fib1, fib2);
	fib = 0;
	for (i = 0; i < 50; i++)
	{
		fib = fib1 + fib2;
		printf("%d, ", fib);
		temp = fib2;
		fib2 = fib;
		fib1 = temp;
	}
	printf("%d", fib);
	printf("\n");
	return (0);
}



