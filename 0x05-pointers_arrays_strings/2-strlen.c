#include "main.h"

/**
 * _strlen - returns lenght of string
 * @s: the string input
 * return: 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
