#include <stdio.h>

/**
 * main - prints name of program
 * @argc: number of command-line argument
 * @argv: array of command-line
 * Return: None
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
