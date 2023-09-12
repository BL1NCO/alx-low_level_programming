#include<stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - printing from a to z lowercase
 *
 * return: the value is 0 (Sucess) 
 */

int main(void)
{
	char a = 'a';
	while(a <= 'z')
	{
		putchar(a);
		a++;
	}
	return (0);
}
