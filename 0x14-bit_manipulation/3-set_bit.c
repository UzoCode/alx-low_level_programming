#include "main.h"

/**
 * set_bit - sets value of bit at index 1
 * @n: pionter to the number;
 * @index: the bit index
 * Return: 1 on success, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
