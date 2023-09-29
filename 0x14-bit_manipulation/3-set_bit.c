#include "main.h"

/**
 * set_bit - sets the value of bit to 1.
 * at a given index.
 * @n: The pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if worked, -1 if not worked.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int u;

	if (index > 63)
		return (-1);

	u = 1 << index;
	*n = (*n | u);

	return (1);
}
