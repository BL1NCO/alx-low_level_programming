#include "main.h"

/**
 * times_table - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a * b) > 9)
			{
				_putchar('0' + ((a * b) / 10));
				_putchar('0' + ((a * b) % 10));
				_putchar(',');
				_putchar(' ');
			}
			else
			{
					_putchar('0' + (a * b));
					_putchar(' ');
					_putchar(',');
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

