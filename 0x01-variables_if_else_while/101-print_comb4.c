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
	int k;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			for (k = '0' ; k <= '9' ; k++)
			{
				if (i == j || i == k || j == k || i > j || j > k)
					continue;
				else
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != '7')
					{
						putchar(',');
						putchar(' ');
					}
					else
						putchar('\n');
				}
			}
		}
	}
	return (0);
}
