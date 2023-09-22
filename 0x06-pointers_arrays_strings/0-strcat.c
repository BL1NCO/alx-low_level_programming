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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

