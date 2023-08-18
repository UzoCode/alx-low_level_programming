#include "main.h"

/**
 * print_diagonal - draws a diagonal shape line on terminal
 * @n: shows number of times the character \ is printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int u, b;

		for (u = 0; u < n; u++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == u)
					_putchar('\\');
				else if (b < u)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

