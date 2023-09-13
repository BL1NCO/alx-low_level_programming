#include "main.h"

/**
 * print_sign - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @n: integer variable to return
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
