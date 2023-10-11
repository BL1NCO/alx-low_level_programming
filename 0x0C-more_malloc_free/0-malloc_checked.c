#include"main.h"

/**
 * malloc_checked - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @b: parametre used as integer
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
