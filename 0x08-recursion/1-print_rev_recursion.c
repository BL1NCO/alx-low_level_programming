#include "main.h"

/**
 * _print_rev_recursion - printing reversed string
 *
 * Return: Always 0 (Sucess)
 * @s: parametre used as integer
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
