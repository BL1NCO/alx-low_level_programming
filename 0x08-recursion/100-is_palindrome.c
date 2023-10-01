#include "main.h"

int ck_pal(char *s, int i, int len);
int len_recursion(char *s);

/**
 * is_palindrome - checker
 * @s: string
 * Return: 1 succ
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (ck_pal(s, 0, len_recursion(s)));
}

/**
 * len_recursion - returns the length of a string
 * @s: string
 * Return: int
 */
int len_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len_recursion(s + 1));
}

/**
 * ck_pal - check
 * @s: str
 * @i: int
 * @len: int
 * Return: 1 succ
 */
int ck_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (ck_pal(s, i + 1, len - 1));
}

