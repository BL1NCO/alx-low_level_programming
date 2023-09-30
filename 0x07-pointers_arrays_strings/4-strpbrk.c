#include "main.h"

/**
 * _strpbrk - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @s: parametre used as integer
 * @accept: parametre used as integer
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int x = 0;

	for (; s[x]; x++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[x] == accept[i])
			{
				return(&s[x]);
				break;
			}
		}
	}
}
