#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - printing from a to z lowercase
 *
 * return: the value is 0 (Sucess) 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	char a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	return (0);
}
