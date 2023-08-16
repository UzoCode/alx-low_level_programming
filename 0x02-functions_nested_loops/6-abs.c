#include "main.h"

/**
 * _abs - Absolut value of an integer
 * @num: value being check
 *
 * Return: 0 for int
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
