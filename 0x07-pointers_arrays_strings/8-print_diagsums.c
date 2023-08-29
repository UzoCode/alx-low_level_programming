#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonal
 * of square matrix of interger
 * @a: input pointer
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < (size * size); b++)
	{
		if (b % (size + 1) == 0)
			sum1 += *(a + b);
		if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
			sum2 += *(a + b);
	}
	printf("%d, %d\n", sum1, sum2);
}
