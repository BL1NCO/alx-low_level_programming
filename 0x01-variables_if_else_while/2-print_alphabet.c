#include<stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar (a);
		a++;
	}
	return (0);
}
