#include "main.h"

/**
 * get_bit - gets value of a bit at given index.
 * @n: the number
 * @index: Bit index
 * Return: index Bit or -1 if error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bi;

	if (index > 63)
		return (-1);
	bi = (n >> index) & 1;
	return (bi);
}
