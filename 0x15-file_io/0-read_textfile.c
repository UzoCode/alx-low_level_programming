#include "main.h"

/**
 * read_textfile - reads text file to prints the letters
 * @filename: The filename.
 * @letters: The numbers of letters printed.
 *
 * Return: number of letters printed. If fail, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t md, mr;
	char *bull;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	bull = malloc(sizeof(char) * (letters));
	if (!bull)
		return (0);

	md = read(f, bull, letters);
	mr = write(STDOUT_FILENO, bull, md);

	close(f);

	free(bull);

	return (mr);
}
