#include "main.h"

/**
 * print_numbers - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 *
 */

void print_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
