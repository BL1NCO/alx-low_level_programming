#include<stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @array: parametre used as integer
 * @size: parametre used as integer
 * @cmp: parametre used as integer
 */

int int_index(int *array, int size, int (*cmp)(int))
	{
		int i;


		if (array == NULL || size <= 0 || cmp == NULL)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}

