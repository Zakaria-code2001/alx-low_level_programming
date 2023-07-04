#include "lists.h"

/**
 * free_listint - it frees a LL
 * @head: listint_t a freed list
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head)
	{
		tem = head->next;
		free(head);
		head = tem;
	}
}
