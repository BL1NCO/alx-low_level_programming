#include<stdio.h>
#include <stdlib.h>

/**
 * main - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}
