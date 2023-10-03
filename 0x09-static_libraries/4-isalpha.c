#include "main.h"

/**
 * _isalpha - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @c: integer variable to return
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
