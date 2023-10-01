#include "main.h"

/**
 * _puts_recursion - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @s: parametre used as integer
 */

void _puts_recursion(char *s)
{
	if (*s > '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
		return;
}
