#include "main.h"

/**
 * get_endianness - checks system endianess
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *cha = (char *) &a;

	return (*cha);
}
