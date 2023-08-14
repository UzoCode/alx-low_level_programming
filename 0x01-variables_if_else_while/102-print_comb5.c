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
	int l;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			for (k = '0' ; k <= '9' ; k++)
			{
				for (l = '0' ; l <= '9' ; l++)
				{
					if ((i < j || j < i) || (k == l || l < k))
						continue;
					else
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i != '8' || k != l)
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
	}
	return (0);
}
