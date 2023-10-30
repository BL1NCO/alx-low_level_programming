#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - fun
 *
 * @n: sm um
 * @...: sum
 * Return: always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, s = 0;

	va_start(a, n);
	for (i = 0; i < n; i++)
		s += va_arg(a, int);

	va_end(a);
	return (sum);
}
