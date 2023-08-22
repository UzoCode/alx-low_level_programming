#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: character check
 * Return: always none
 */
void print_rev(char *s)
{
	int lenght = 0;

	while (lenght >= 0)
	{
		if (s[lenght] == '\0')
			break;
		lenght++;
	}

	for (lenght--; lenght >= 0; lenght--)
		_putchar(s[lenght]);
	_putchar('\n');
}
