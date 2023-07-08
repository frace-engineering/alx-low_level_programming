#include "main.h"


/**
 * get_bit - get the bit at a given index
 * @n: an integer
 * @index: given index
 *
 * Return: the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = ((n >> index) & 1);

	return (i);
}
