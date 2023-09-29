#include "main.h"

/**
 * get_bit - returns value of bit at given index.
 * @n: Input of unsigned long int.
 * @index: The bit index.
 *
 * Return: The value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int u;

	if (n == 0 && index < 64)
		return (0);

	for (u = 0; u <= 63; n >>= 1, u++)
	{
		if (index == u)
		{
			return (n & 1);
		}
	}

	return (-1);
}
