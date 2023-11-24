#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 * @b: string pointer to 0 and 1 chars
 *
 * Return: The converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int a;

	a = 0;
	if (!b)
		return (0);
	for (u = 0; b[u] != '\0'; u++)
	{
		if (b[u] != '0' && b[u] != '1')
			return (0);
	}
	for (u = 0; b[u] != '\0'; u++)
	{
		a <<= 1;
		if (b[u] == '1')
			a += 1;
	}
	return (a);
}
