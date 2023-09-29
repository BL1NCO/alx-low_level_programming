#include "main.h"

/**
 * _memcpy - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @dest: parametre used as integer
 * @n: parametre used as integer
 * @src: parametre used as integer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}

