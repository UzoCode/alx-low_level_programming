#include "main.h"

/**
 * _puts - print a string
 * @str: string input
 * Return: Always none
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
	}
	_putchar('\n');
}
