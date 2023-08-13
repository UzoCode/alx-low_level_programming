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

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			if (i == j || j < i)
				continue;
			else
			{
				putchar(i);
				putchar(j);
				if (i != '8')
				{
					putchar(',');
					putchar(' ');
				}
				else
					putchar('\n');
			}
		}
	}
	return (0);
}
