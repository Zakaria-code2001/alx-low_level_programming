#include "lists.h"

/**
 * reverse_listint - Reverses a LL
 * @head: Points To The First Node In the L
 *
 * Return: a pointer to the first node in New List
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *after = NULL;

	while (*head)
	{
		after = (*head)->after;
		(*head)->after = pre;
		pre = *head;
		*head = after;
	}

	*head = pre;

	return (*head);
}
