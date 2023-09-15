#include "main.h"

/**
 * _isupper - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @c: parametre used as integer
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
