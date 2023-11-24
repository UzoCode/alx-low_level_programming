#include "main.h"
/**
 * flip_bits - times flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, product;
	unsigned int a, i;

	a = 0;
	product = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (product == (diff & product))
			a++;
		product <<= 1;
	}

	return (a);
}
