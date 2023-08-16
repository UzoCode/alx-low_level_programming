#include "main.h"

/**
 * times_table - Displaces 9 times table
 *
 * Return: 0
 *
 */
void times_table(void)
{
	int i, j, num;

	for (i = 0; i <= 9; i++)
	{
		_putchar ('0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			num = i * j;
			if (num <= 9)

				_putchar(' ');
			else
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
	_putchar('\n');
	}
}
