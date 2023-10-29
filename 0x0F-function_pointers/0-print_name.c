#include<stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @name: parametre used as integer
 * @f: parametre used as integer
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

