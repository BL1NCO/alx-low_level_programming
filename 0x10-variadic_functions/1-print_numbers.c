#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - func
 *
 * @separator: arg
 * @n: arg
 * @...: arg.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nm;
	unsigned int i;

	va_start(nm, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nm, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nm);
}

