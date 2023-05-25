#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int fib1, fib2, temp, fib;
	long int sum;

	fib1 = 1;
	fib2 = 2;
	fib = 0;
	sum = 0;
	while (sum < 4000000)
	{
		fib = fib1 + fib2;
		temp = fib2;
		fib2 = fib;
		fib1 = temp;
		if (fib % 2 == 0)
		{
			sum += fib;
		}
	}
	printf("%ld\n", sum);
	return (0);
}



