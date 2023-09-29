#include "main.h"

/**
 * _strchr - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @s: parametre used as integer
 * @c: parametre used as integer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != c)
	{
		i++;
		s++;
	}
	for (; *(s + i); i++)
		*(s + i);
	return (s);
}
