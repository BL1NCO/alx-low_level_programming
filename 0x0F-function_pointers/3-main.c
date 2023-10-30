#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main fun
 *
 * @argc: num
 * @argv: arg
 * Return: Always 0 sucess
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2;
	char *opp;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	opp = argv[2];
	n2 = atoi(argv[3]);


	if (get_op_func(opp) == NULL || opp[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*opp == '/' && n2 == 0) ||
	    (*opp == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opp)(n1, n2));
	return (0);
	}

