#include "main.h"

/**
 * flip_bits - return number of bits needed to flip
 * to get from one number to another
 * @n: first number.
 * @m: second number.
 *
 * Return: The number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bitsn;

	for (bitsn = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bitsn++;
	}

	return (bitsn);
}
