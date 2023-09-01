#include "main.h"

/**
 * _atoi- covert a string to interger
 * @s: string input
 * Return: interger
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, b;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

				if (*(s + count) == '-')
				pn *= -1;
				if ((*(s + count) >= '0') && (*(s + count) <= '9'))
				{
				if (size > 0)
				m *= 10;
				size++;
				}
				count++;
				}
				for (b = count - size; b < count; b++)
				{
				oi = oi + ((*(s + b) - 48) * m);
				m /= 10;
				}
				return (oi * pn);
				}
