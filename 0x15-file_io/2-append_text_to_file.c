#include "main.h"

/**
 * _strlen - finds string length
 * @str: pointer to string
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t u;

	for (u = 0; str[u]; u++)
		;
	return (u);
}

/**
 * append_text_to_file - appends text to the end of a file.
 * @filename: The name of the file
 * @text_content: The NULL terminated string added at end of file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fld;
	ssize_t lent;

	if (filename == NULL)
		return (-1);
	fld = open(filename, O_WRONLY | O_APPEND);
	if (fld == -1)
		return (-1);
	if (text_content != NULL)
		lent = write(fld, text_content, _strlen(text_content));
	close(fld);
	if (lent == -1)
		return (-1);
	return (1);
}
