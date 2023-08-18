#include "main.h"

/**
 * print_line - prints lines in terminal
 * @n: is number times the character
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar(' ');
		}
	_putchar('\n');
	}
}
