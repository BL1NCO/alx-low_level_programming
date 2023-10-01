#include "main.h"

/**
 * factorial - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @n: parametre used as integer
 */

int factorial(int n)
{
	if (n > 0)
	{
		n *= factorial(n - 1);
		return (n);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (0);
}
