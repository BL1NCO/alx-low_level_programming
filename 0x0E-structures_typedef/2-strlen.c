#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @s: parametre used as integer
 */

int _strlen(char *s)
{
	int j;

	for (j = 0; *s != '\0'; s++)
		j++;
	return (j);
}
