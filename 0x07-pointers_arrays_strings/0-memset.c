#include "main.h"

/**
 * _memset - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @n: parametre used as integer
 * @b: parametre used as character
 * @s: parametre used as pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
}

