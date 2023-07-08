#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);
	*n = *n | (1UL << index);

	return (1);

}       
