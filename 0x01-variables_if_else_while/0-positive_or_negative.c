#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* return: It will return 0 always*/
/* main - Refers to main function*/
int main(void)
{
	srand(time(0));
	int n = rand() % (2 * % RAND_MAX) - RAND_MAX;

	printf("The number %d", n);

	if (n > 0)

		printf("Positive\n");

	else if (n == 0)

		printf("zero\n");

	else
		printf("negative\n");

	return (0);

}
