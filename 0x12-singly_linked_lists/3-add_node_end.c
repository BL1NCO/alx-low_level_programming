#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add linked list
 *
 * @head: dobl ptr
 * @str: string pointer
 * Return: always 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *itr;
	list_t *t = *head;
	unsigned int l = 0;

	while (str[l])
	l++;

	itr = malloc(sizeof(list_t));
	if (!itr)
	return (NULL);

	itr->str = strdup(str);
	itr->l = l;
	itr->n = NULL;

	if (*head == NULL)
	{
		*head = itr;
		return (itr);
	}

	while (t->n)
		t = t->n;

	t->n = itr;

	return (itr);
}

