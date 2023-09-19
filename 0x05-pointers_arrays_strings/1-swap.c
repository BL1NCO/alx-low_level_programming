#include "main.h"

/**
 * swap_int - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @a: parametre used as integer
 * @b: parametre used as integer
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
