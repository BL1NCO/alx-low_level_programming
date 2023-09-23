#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoding 2
 * @s: str ptr
 *
 * Return: 0
 */

char *rot13(char *s)
{
	int k;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[k] == data1[j])
			{
				s[k] = datarot[j];
				break;
			}
		}
	}
	return (s);
}

