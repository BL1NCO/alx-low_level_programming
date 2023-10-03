#include "main.h"

/**
 * _strstr - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @haystack: parametre used as integer
 * @needle: parametre used as integer
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *x = needle;

		while (*i == *x && *x != '\0')
		{
			i++;
			x++;
		}

		if (*x == '\0')
			return (haystack);
	}

	return (0);
}

