#include "main.h"

/**
 * swap_int - swap interger values
 * @a: swaped interger
 * @b: another swapped interger
 * return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
