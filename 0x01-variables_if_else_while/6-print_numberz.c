#include <stdio.h>

/**
 * main - main functions
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);

}
