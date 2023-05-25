#include <stdio.h>

/** main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int fib1, fib2, i, temp, fib;
	int sum;

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
	printf("%d\n", sum);
	printf("%d\n", fib);
	return (0);
}



