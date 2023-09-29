#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i;
	char *u;

	i = 1;
	u = (char *) &i;

	return ((int)*u);
}
