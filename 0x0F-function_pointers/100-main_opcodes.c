#include <stdio.h>
#include <stdlib.h>

/**
 * main - check its own code.
 * @argc: number argument count.
 * @argv: number argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *op = (char *) main;
	int n, ibytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	ibytes = atoi(argv[1]);

	if (ibytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (n = 0; n < ibytes; n++)
	{
		printf("%02x", op[n] & 0xFF);
		if (n != ibytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
