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

	for (y = 0; dest[y];)
		y++;
	int s;

	for (s = 0; src[s]; s++)
	{
		dest[y] = src[s];
		y++;
	}
	return (dest);
}
