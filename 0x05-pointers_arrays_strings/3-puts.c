#include "main.h"

/**
 * _puts - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @str: parametre used as integer
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
