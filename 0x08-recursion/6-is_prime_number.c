#include "main.h"

int x_prime(int n, int i);

/**
 * is_prime_number - funt
 * @n: int
 * Return: 0 sycc
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (x_prime(n, n - 1));
}

/**
 * x_prime - calculate
 * @n: number to evaluate
 * @i: int
 * Return: 0
 */
int x_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (x_prime(n, i - 1));
}

