#include "main.h"

/**
 * _puts_recursion - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @s: parametre used as integer
 */

void _puts_recursion(char *s)
{
	int j;
	int i;
	char *f;

	f = s;
	for (j = 0; *f != '\0'; f++)
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		_putchar(s[i]);
	}
}
