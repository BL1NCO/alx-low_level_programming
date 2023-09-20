#include "main.h"
#include <stdio.h>

/**
 * print_array - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @a: parametre used as integer
 * @n: parametre used as integer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

