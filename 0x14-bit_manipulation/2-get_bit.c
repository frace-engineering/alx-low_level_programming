#include "main.h"


/**
 * get_bit - return the bit at a given index
 * @n: input ingetger
 * @index: given index
 *
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);
	i = (n >> index) & 1;
	return (i);
}
