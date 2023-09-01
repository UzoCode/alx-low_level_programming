#include "main.h"

/**
 * _memset - fills memory with constant bytes
 * @s: memory area
 * @b: memory constant
 * @n: bytes filled
 * Return: pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(s + a) = b;
	return (s);
}
