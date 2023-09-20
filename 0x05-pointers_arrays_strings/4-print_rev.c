#include "main.h"

/**
 * print_rev - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @s: parametre used as integer
 */
void print_rev(char *s)
{
	int l = 0;
	int o;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (o = l; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

