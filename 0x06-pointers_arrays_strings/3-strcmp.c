#include "main.h"

/**
 * _strcmp - cpoies strings
 * @s1: The first string
 * @s2: The second string
 * Return: 0 if s1 snd s2 equals,
 * else another.
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;

	while (b == 0)
	{
		if ((*(s1 + a) == '\0') && (*(s2 + a) == '\0'))
			break;
		b = *(s1 + a) - *(s2 + a);
		a++;
	}
	return (b);
}
