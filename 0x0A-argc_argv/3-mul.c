#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * main - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @argc: parametre used as integer
 * @argv: parametre used as integer
 */
int main(int argc, char **argv)
{
	int by;

	if (argc == 3)
	{
		printf("%d\n", by);
		by = atoi(*argv[1]) * atoi(*argv[2]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
