#include "dog.h"

/**
 * _strcpy - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @dest: parametre used as integer
 * @src: parametre used as integer
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

