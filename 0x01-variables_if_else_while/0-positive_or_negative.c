#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() -  RAND_MAX / 2;
	/* Then your code follows */
	if (n > 0)
		printf("%d, is Positive", n);
	else if (n == 0)
		printf("%d, is zero", n);
	else
		printf("%d, is negative", n);
	printf("\n");
	return (0);

}
