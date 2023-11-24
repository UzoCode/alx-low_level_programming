#include "main.h"

/**
 * print_binary - prints binary representation of number
 * @n: the number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	_ulin tem, bi, i;

	if (!n)
		_putchar(48);
	else
	{
		tem = n, i = 0;
		while (tem)
			tem >>= 1, i++;
		while (i)
		{
			bi = (n >> (i - 1)) & 1;
			_putchar(48 + bi);
			i--;
		}
	}
}
