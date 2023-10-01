#include "main.h"

/**
 * _pow_recursion - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @x: parametre used as integer
 * @y: parametre used as integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

