#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 except 2 and 4
 * Return: 0
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a == 2 || a == 4)
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
