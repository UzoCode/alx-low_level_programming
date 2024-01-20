#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string pointed to by src,
 * includes terminating null byte, to the buffer
 * pointed to by dest
 * @dest: destination
 * @src: source
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

		while (count >= 0)
		{
			*(dest + count) = *(src + count);
			if (*(src + count) == '\0')
			break;
			count++;
		}
	return (dest);
}
