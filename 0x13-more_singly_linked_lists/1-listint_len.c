#include "lists.h"
/**
 * listint_len - cmd returns number of elements in linked lists
 * @h:the linked list is of type listint_t 
 *
 * Return:n° of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
