#include<stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - printing from a to z lowercase
 *
 * @array: parametre used as integer
 * @action: parametre used as integer
 * @size: parametre used as integer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
