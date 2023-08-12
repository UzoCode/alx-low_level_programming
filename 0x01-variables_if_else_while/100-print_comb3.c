#include <stdio.h>

/**
 * main - main functions
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			putchar(i);
			putchar(j);
		}
		if (i != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
