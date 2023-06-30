#include <stdlib.h>
#include "lists.h"

/**
 * list_len - it returns  the n° of elements in a linked list
 * @h: it points to the list_t list
 *
 * Return: n° of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
