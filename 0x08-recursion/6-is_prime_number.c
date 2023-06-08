#include <stdio.h>
#include "main.h"


/**
 * is_prime_number - checks if input integer is a prime number
 * @n: input integer
 * Return: 1 if integer is prime number else 0
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	i = n / 2;
	if (i == 1)
		return (0);
	if (n % i == 0)
	{
		return (0);
	}
	else if (n % i != 0)
	{
		return (1);
	}
	i++;

	return (is_prime_number(n - 1));
}
