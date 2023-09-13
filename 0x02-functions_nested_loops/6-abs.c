#include "main.h"

/**
 * _abs - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @c: integer variable to return
 */

int _abs(int c)
{

	if (c < 0)
		return(c * -1);
	if (c >= 0)
		return(c);
	return (0);
}
