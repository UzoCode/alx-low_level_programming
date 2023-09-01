#include "main.h"

/**
 * _strpbrk -  searches a string for set of bytes
 * @s: string one
 * @accept: string two
 * Return: pointer to byte in s that  match byte in accept
 * or Null if such byte is not found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return ('\0');
}
