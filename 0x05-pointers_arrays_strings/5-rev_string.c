#include "main.h"

/**
 * rev_string - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @s: parametre used as integer
 */

void rev_string(char *s)
{
	char rev = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
	c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
	}
}

