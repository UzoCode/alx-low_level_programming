#include "main.h"

/**
 * _strlen - returns lenght of string
 * @s: string input
 * Return: lenght of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
