#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * file_error - checks if files can be opened.
 * @file_here: file_from.
 * @file_there: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void file_error(int file_here, int file_there, char *argv[])
{
	if (file_here == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_there == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check to copy file to another file.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_here, file_there, close_error;
	ssize_t nchar, nwrite;
	char buffs[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_here = open(argv[1], O_RDONLY);
	file_there = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_here, file_there, argv);

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(file_here, buffs, 1024);
		if (nchar == -1)
			file_error(-1, 0, argv);
		nwrite = write(file_there, buffs, nchar);
		if (nwrite == -1)
			file_error(0, -1, argv);
	}

	close_error = close(file_here);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_here);
		exit(100);
	}

	close_error = close(file_there);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_here);
		exit(100);
	}
	return (0);
}
