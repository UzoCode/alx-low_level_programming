#include "main.h"

/**
 * print_alphabet_x10 - This function prints alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char b = 'a';

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 'a' ; b <= 'z' ; b++)
			_putchar(b);
	}
	_putchar('\n');
}
