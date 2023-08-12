#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char j;

	i = 0;
	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 0 ; j < 15 ; j++)
		putchar(j + '0');
	putchar('\n');
	return (0);
}

