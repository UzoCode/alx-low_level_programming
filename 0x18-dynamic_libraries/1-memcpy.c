#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area destination
 * @src: memory area source
 * @n: byte filled
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + a) = *(src + a);

	return (dest);
}
