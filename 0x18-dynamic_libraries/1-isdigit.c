#include "main.h"

/**
 * _isdigit - program prints numbers
 * @c: checks numbers from 0 to 9
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
