#include "main.h"

/**
 * jack_bauer - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(58);
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			putchar('\n');
		}
	}
}
