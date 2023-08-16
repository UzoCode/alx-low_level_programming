#include "main.h"

/**
 * print_alphabet_x10 - This function prints alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	char b;
	int a;

	a = 1;
	{
		for (a = 1 ; a <= 10 ; a++)
		{
			for (b = 'a' ; b <= 'z' ; b++)
			{
				_putchar(b);
			}
			_putchar('\n');
		}
	}
}
