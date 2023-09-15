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

	while (b <= 57)
	{
		if ((b != 50) && (b != 52))
		{
			putchar(b);
			b++;
		}
	}
	putchar('\n');
}

