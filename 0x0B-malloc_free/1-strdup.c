#include "main.h"

/**
 * _strdup - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @str: parametre used as integer
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *strstr;
	char *ptr;

	strstr = str;
	for (i = 0; *strstr != '\0'; strstr++)
	{
		i++;
	}
	ptr = (char *)malloc(i * sizeof(char));
	if (ptr != NULL)
	{
		for (j = 0; j <= i; j++)
		{
			ptr[j] = str[j];
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
