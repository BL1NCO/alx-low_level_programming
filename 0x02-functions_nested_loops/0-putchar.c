#include "main.h"

/**
 * main - the entry Point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char str[] = "_putchar";
	int s = 0;

	for (s = 0; s <= 8; s++)
		_putchar(str[s]);
	_putchar('\n');
	return (0);
}
