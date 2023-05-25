#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int fib1, fib2, temp, fib;
	int i;

	fib1 = 1;
	fib2 = 2;
	printf("%ld, %ld, ", fib1, fib2);
	fib = 0;
	temp = 0;
	for (i = 0; i < 47; i++)
	{
		fib = fib1 + fib2;
		printf("%ld, ", fib);
		temp = fib2;
		fib2 = fib;
		fib1 = temp;
	}
	printf("%ld\n", fib1 + fib2);
	return (0);
}



