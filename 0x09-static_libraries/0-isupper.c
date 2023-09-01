#include "main.h"

/**
 * _isupper - program check for uppercase character
 *@c: character to be checked
 * Return: 1 for uppercase or 0 otherwise
 *
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}

