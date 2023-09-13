#include "main.h"

/**
 * print_last_digit - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @d: integer variable to return
 */

int print_last_digit(int d)
{
	int f = d % 10;

	_putchar('0' + f);
	return (f);
}
