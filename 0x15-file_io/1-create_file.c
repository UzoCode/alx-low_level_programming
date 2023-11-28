#include "main.h"
/**
 * create_file -creates character array and initialize them
 *
 * @text_content: A NULL terminated string to write to the file
 * @filename: Name of file to create
 *
 * Return: 1 if successful, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wte, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wte = write(opn, text_content, lent);

	if (opn == -1 || wte == -1)
		return (-1);

	close(opn);

	return (1);
}
