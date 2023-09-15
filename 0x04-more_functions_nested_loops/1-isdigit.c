#include "main.h"

/**
 * _isdigit - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @c: parametre used as integer
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
		return (1);
	else
		return (0);
}
