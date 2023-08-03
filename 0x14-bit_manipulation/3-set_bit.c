#include "main.h"


/**
 * set_bit - set the bit at a given index
 * @n: input ingetger
 * @index: given index
 *
 * Return: 1 on SUCCESS else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = i << index;
	*n = *n | i;
	return (1);
}
