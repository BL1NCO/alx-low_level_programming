#include "main.h"

/**
 * _puts_recursion - printing reversed string
 *
 * Return: Always 0 (Sucess)
 * @s: parametre used as integer
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_prints_rev_recursion(s + 1);
		_putchar(*s);
	}
}
