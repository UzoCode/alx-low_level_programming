#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two numbers
 * @argc: number of command line argument arguments
 * @argv: arrays of arguments
 * Return: None
 */
int main(int argc, char *argv[])
{
	int i, b, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (b = 0; argv[i][b] != '\0'; b++)
		{
			if (!isdigit(argv[i][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
