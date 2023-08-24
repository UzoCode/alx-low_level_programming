#include "main.h"

/**
 * reverse_array - reverses arrays
 * @a: the array
 * @n: number of array element
 * Return: No return
 */
void reverse_array(int *a, int n)
{
	int c, b, tem;

	for (c = 0; c < n - 1; c++)
	{
		for (b = c; b > 0; b--)
		{
			tem = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = tem;
		}
	}
}
