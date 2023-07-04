#include "lists.h"

/**
 * free_listint2 - a free LL
 * @head: it’s a pointer to the listint_t list freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
		return;

	while (*head)
	{
		tem = (*head)->next;
		free(*head);
		*head = tem;
	}

	*head = NULL;
}
