#ifndef LISTS_H
#define LISTS_H

/**
 * struct lst_k - structure
 *
 * @str: str
 * @l: int
 * @n: node ptr
 */

typedef struct lst_k
{
	char *str;
	unsigned int l;
	struct lst_k *n;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

