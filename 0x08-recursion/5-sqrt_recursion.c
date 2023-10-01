#include "main.h"

int a_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @n: parametre used as integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (a_sqrt_recursion(n, 0));
}

/**
 * a_sqrt_recursion - recurses to find the natural
 * @n: number integ
 * @i: int
 * Return: 0 succ
 */

int a_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (a_sqrt_recursion(n, i + 1));
}


