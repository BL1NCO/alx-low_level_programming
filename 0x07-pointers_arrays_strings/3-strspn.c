#include "main.h"

/**
 * _strspn - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @s: parametre used as integer
 * @accept: parametre used as integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int x = 0;
	int f = 0;

	for (; s[x]; x++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[x] == accept[i])
			{
				f++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (f);
		}
	}
	return (f);
}
