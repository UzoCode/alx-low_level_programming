#include <stdlib.h>
#include <time.h>
/* add more header here */
#include <stdio.h>
/* betty style doc for main function here */
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Then your code follows */
	if (n > 0)
		printf("%d is Positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n");
	return (0);

}
