#include "main.h"

/**
 * _islower - printing from a to z lowercase
 *
 * @c: The first integer define type of char
 * Return: Always 0 (Sucess)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
		else
		return (0);

	return (0);
}
