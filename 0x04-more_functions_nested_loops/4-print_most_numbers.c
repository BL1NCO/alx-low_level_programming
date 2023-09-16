#include "main.h"

/**
 * print_most_numbers - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 *
 */

void print_most_numbers(void)
{
	int b = 48;

	for (; b <= 57; b++)
	{
		if (b == 50 || b == 52)
			continue;
		_putchar(b);
	}
	_putchar('\n');
}

