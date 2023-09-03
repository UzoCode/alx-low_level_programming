#include <stdio.h>

/**
 * main - counts number of arguments passed
 * @argc: number of argument
 * @argv: array of line arguments
 * Return: None
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
