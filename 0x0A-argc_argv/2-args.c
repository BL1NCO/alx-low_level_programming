#include <stdio.h>
#include "main.h"
/**
 * main - print
 * @argc: number
 * @argv: array
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
}