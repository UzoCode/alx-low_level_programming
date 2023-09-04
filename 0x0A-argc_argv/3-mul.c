#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two interger
 * @argc: number of command line argument
 * @argv: array of argument
 * Return: None
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	return (0);
}
