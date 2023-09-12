#include<stdio.h>
#include <stdlib.h>

/**
 * main - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char a = 'A';

	while (a <= 'Z')
	{
		putchar (a);
		a++;
	}
	putchar ('\n');
	return (0);
}
