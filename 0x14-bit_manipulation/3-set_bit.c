#include "main.h"



/**
 * set_bit - set the bit at a given index to 1
 * @n: pointer to integer
 * @index: index of the bit
 *
 * Return: the set bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);
	*n = *n | (1UL << index);

	return (1);

}
