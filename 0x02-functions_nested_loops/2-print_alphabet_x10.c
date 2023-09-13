#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0 (Sucess)
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int b = 1;

	for (b = 1; b <= 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
		_putchar('\n');
	}
}
