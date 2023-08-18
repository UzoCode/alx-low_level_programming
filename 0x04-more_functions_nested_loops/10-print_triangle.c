#include "main.h"

/**
 * print_triangle - prints triangle followed by new line
 * @size: triangle size
 */
void print_triangle(int size)
{
	int i, a;

	for (i = 0; i < size; i++)
	{
		for (a = 1; a < (size - i); a++)
			_putchar(' ');
		for (a--; a < size; a++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

