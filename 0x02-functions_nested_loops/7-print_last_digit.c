#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: checks the code
 *
 * Return: 0
 */
int print_last_digit(int num)
{
	int lastNum = num % 10;

	_putchar(lastNum + '0');
	return (0);
}
