#include <stdlib.h>
#include "lists.h"

/**
 * list_len - funtion
 *
 * @h: pntr
 * Return: always 0
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

