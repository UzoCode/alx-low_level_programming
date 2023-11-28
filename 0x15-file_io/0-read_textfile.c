#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file then  prints it.
 * @filename: Pointer to a File
 * @letters: Number of letters to print
 *
 * Return: 0 if function fails or filename is NULL.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rad, wte;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rad = read(opn, buff, letters);
	wte = write(STDOUT_FILENO, buff, rad);

	if (opn == -1 || rad == -1 || wte == -1 || wte != rad)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(opn);

	return (wte);
}
