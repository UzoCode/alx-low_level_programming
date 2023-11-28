#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check97 - checks correct number of arguments
 * @argc: The number of arguments
 *
 * Return: void
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - Ensure that file_from exists and can be read
 * @check: check true of false
 * @file: Name of file_from
 * @fld_from: file descriptor of file_from, or -1
 * @fld_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check98(ssize_t check, char *file, int fld_from, int fld_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fld_from != -1)
			close(fld_from);
		if (fld_to != -1)
			close(fld_to);
		exit(98);
	}
}

/**
 * check99 - Ensures that file_to was created and can be written to
 * @check: check true or false
 * @file: The name of file_to
 * @fld_from: file descriptor of file_from, or -1
 * @fld_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check99(ssize_t check, char *file, int fld_from, int fld_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fld_from != -1)
			close(fld_from);
		if (fld_to != -1)
			close(fld_to);
		exit(99);
	}
}

/**
 * check100 - Ensure file descriptors were closed
 * @check: checks true or false
 * @fld: file descriptor
 *
 * Return: void
 */
void check100(int check, int fld)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fld);
		exit(100);
	}
}
/**
 * main - copy the file content to another file.
 * @argc: The number of arguments
 * @argv: The array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fld_from, fld_to, close_to, close_from;
	ssize_t lent, lenu;
	char buff[1024];
	mode_t file_perm;

	check97(argc);
	fld_from = open(argv[1], O_RDONLY);
	check98((ssize_t)fld_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fld_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)fld_to, argv[2], fld_from, -1);
	lent = 1024;
	while (lent == 1024)
	{
		lent = read(fld_from, buff, 1024);
		check98(lent, argv[1], fld_from, fld_to);
		lenu = write(fld_to, buff, lent);
		if (lenu != lent)
			lenu = -1;
		check99(lenu, argv[2], fld_from, fld_to);
	}
	close_to = close(fld_to);
	close_from = close(fld_from);
	check100(close_to, fld_to);
	check100(close_from, fld_from);
	return (0);
}
