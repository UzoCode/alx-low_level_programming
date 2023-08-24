#include "main.h"
/**
 * infinite_add - adds two digits
 * @n1: number one
 * @n2: number two
 * @r: buffer for the function storing of result
 * @size_r: buffer size
 * Return: points to dest
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, o, b, d1, d2, add = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		b = c1;
	else
		b = c2;
	if (size_r <= b + 1)
		return (0);
	r[b + 1] = '\0';
	c1--, c2--, size_r--;
	d1 = *(n1 + c1) - 48, d2 = *(n2 + c2) - 48;
	while (b >= 0)
	{
		o = d1 + d2 + add;
		if (o >= 10)
			add = o / 10;
		else
			add = 0;
		if (o > 0)
			*(r + b) = (o % 10) + 48;
		else
			*(r + b) = '0';
		if (c1 > 0)
			c1--, d1 = *(n1 + c1) - 48;
		else
			d1 = 0;
		if (c2 > 0)
			c2--, d2 = *(n2 + c2) - 48;
		else
			d2 = 0;
		b--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
