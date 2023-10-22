#include "dog.h"
#include <stdio.h>

/**
 * print_dog  - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @d: parametre used as integer
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	printf("Name: %s\n", d->name);
	printf("Name: %f\n", d->age);
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\n", d->owner);

}
