#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 * @str: String
 * Return: Pointer of char array
 */
char *_strdup(char *str)
{
	char *m;
	int n = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);
	for (; str[i] != '\0'; i++)
		n++;
	m = malloc(n * sizeof(char) + 1);
	if (m == NULL)
		return (NULL);
	i = 0;

	for (i = 0; i <= n; i++)
		m[i] = str[i];
	return (m);
}
