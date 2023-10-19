#include <stdlib.h>
#include "lists.h"

/**
 * free_list - lst
 *
 * @head: parametre used as list
 */

void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->n;
		free(head->str);
		free(head);
		head = t;
	}
}

