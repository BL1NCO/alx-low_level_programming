#include "main.h"

/**
 * print_number - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @n: parametre used as integer
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}

