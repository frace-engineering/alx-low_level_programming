#include "main.h"


/**
 * clear_bit - sets the value of a bit at agiven index to 0
 * @n: pointer to a given integer
 * @index: given index
 *
 * Return: 1 on SUCCESS else return -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int copy;

	copy = 1;
	if (index > 63)
		return (-1);
	copy = ~(copy << index);

	*n = *n & copy;

	return (1);
}
