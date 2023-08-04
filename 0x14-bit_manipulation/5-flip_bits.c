#include "main.h"



/**
 * flip_bits - counts number of times to flip bits to get
 * another number
 * @n: first input integer
 * @m: second input integer
 *
 * Return: number of times flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	int i;

	count = 0;

	for (i = 0; i < 62; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count += 1;
	}
	return (count);
}
