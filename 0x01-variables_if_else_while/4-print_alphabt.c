#include<stdio.h>
#include <stdlib.h>

/**
 * main - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
