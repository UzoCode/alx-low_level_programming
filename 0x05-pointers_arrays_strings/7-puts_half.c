#include "main.h"

/**
 * puts_half - print half of string
 * @str: string input
 * Return: 0
 */
void puts_half(char *str)
{
	int count = 0, a;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	if (count % 2 == 1)
		a = count / 2;
	else
		a = (count - 1) / 2;

	for (a++; a < count; a++)
		_putchar(str[a]);
	_putchar('\n');
}
