#include "main.h"
#include <stdlib.h>


/**
 * init_dog - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @d: parametre used as integer
 * @name: parametre used as integer
 * @age: parametre used as integer
 * @owner: parametre used as integer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
