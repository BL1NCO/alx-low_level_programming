#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - printing from a to z lowercase
 *
 * @name: parametre used as integer
 * @age: parametre used as integer
 * @owner: parametre used as integer
 * Return: Always 0 (Sucess)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int lengh_name = _strlen(name);
	int lengh_owner = _strlen(owner);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(char) * (lengh_name + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (lengh_owner + 1));
	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}
	_strcpy(ptr->name, name);
	_strcpy(ptr->owner, owner);
	ptr->age = age;
	return (ptr);
}

