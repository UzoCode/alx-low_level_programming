#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: string concatenated
 * @src: Another string concatenated
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}
	while (b >= 0)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
			break;
		a++;
		b++;
	}
	return (dest);
}
