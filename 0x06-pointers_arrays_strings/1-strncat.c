#include "main.h"

/**
 * *_strncat - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @n: parametre used as integer
 * @dest: parametre used as integer
 * @src: parametre used as integer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

