#include "main.h"
#include <stdio.h>

/**
 * main - numbers 1 to 100 is printed followed by a new line
 * for multiples of three Fizz is printed instead of the number
 * for multiples of five Buzz is printed instead of the number
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Buzz");
		}
		else if (a % 5 == 0)
		{
			printf("Fizz");
		}
		else if (a == 1)
		{
			printf("%d", a);
		}
		else
		{
			printf("%d", a);
		}
	}
	printf("\n");
	return (0);
}
