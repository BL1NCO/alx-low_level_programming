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
	unsigned int len = 0;

	while (str[len])
	len++;

	itr = malloc(sizeof(list_t));
	if (!itr)
	return (NULL);

	itr->str = strdup(str);
	itr->len = len;
	itr->next = NULL;

	if (*head == NULL)
	{
		*head = itr;
		return (itr);
	}

	while (t->next)
		t = t->next;

	t->next = itr;

	return (itr);
}

