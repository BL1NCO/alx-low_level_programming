#include "main.h"
/**
 * _strlen_recursion - funt
 * @s: string
 * Return: 0 success
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s > '\0')
	{
		longit += _strlen_recursion(s + 1) + 1;
	}

	return (l);
}

