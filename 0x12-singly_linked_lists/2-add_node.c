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
	unsigned int len = 0;

	while (str[len])
	len++;

	irt = malloc(sizeof(list_t));
	if (!irt)
	return (NULL);

	irt->str = strdup(str);
	irt->len = len;
	irt->next = (*head);
	(*head) = irt;

	return (*head);
}

