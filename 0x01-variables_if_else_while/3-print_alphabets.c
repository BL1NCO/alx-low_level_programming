#include<stdio.h>
#include <stdlib.h>

/**
 * main - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar (a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar (b);
		b++;
	}	
	putchar ('\n');
	return (0);
}
