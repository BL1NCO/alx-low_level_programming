#include<stdio.h>
#include<stdlib.h>

/**
 * main - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @argc: parametre used as integer
 * @argv: parametre used as integer
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
