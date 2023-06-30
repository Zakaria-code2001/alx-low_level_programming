#include <stdlib.h>
#include "lists.h"

/**
 * free_list - it frees a Linked list
 * @head: list_t it is the list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
