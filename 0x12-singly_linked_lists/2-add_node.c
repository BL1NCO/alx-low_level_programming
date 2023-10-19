#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adding
 *
 * @head: dbl pntr list
 * @str: string
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *irt;
	unsigned int l = 0;

	while (str[l])
	l++;

	irt = malloc(sizeof(list_t));
	if (!irt)
	return (NULL);

	irt->str = strdup(str);
	irt->l = l;
	irt->n = (*head);
	(*head) = irt;

	return (*head);
}

