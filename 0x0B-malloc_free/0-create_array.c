#include "main.h"
/**
 * create_array - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @c: parametre used as integer
 * @size: parametre used as integer
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
