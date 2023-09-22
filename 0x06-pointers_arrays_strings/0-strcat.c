#include "main.h"

/**
 * *_strcat - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @dest: parametre used as integer
 * @src: parametre used as integer
 */

char *_strcat(char *dest, char *src)
{
	int y;
	char *f = dest;

	for (y = 0; *f != '\0'; f++)
		y++;
	int s;

	for (s = 0; src[s]; s++)
	{
		dest[y] = src[s];
		y++;
	}
	return (dest);
}
