#include "main.h"

/**
 * is_prime - identify input number as prime number
 * @n: input number
 * @c: iterator
 * Return: 1 if it is prime number, else 0
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - identify input as prime
 * @n: input number
 * Return: Return 1 if n is prime, else 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
