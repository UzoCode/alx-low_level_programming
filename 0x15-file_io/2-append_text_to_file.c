#include "main.h"
/**
 * append_text_to_file - append text to the end of file
 * @filename: The name of text file
 * @text_content: The content of file
 * Return: 1, if error returns 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int nfile, u = 0;

	if (!filename)
		return (-1);
	nfile = open(filename, O_WRONLY | O_APPEND);
	if (nfile == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[u])
		u++;
	write(nfile, text_content, u);
	close(nfile);
	return (1);
}
