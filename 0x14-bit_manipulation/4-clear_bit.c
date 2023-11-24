#include "main.h"

/**
 * clear_bit - clears bit at given index to 0.
 * @n: the number
 * @index: start from 0 of the bit to be cleared
 * Return: 1 in success, or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = ~(1 << index);
	*n = *n & a;

	return (1);
}
