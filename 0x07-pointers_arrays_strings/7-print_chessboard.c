#include "main.h"

/**
 * print_chessboard - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @a: parametre used as integer
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
