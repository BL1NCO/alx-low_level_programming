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
	int i = 0;
	int x = 0;

	for (; needle[x]; x++)
	{
		for (i = 0; haystack[i]; i++)
		{
			if (haystack[i] == needle[x])
			{
				return (&haystack[i]);
			}
		}
	}
	return (0);
}
