#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @s: parametre used as integer
 */

int _strlen(char *s)
{
	int j;

	for (j = 0; *s != '\0'; s++)
		j++;
	return (j);
}

/**
 * _strcpy - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @dest: parametre used as integer
 * @src: parametre used as integer
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

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

