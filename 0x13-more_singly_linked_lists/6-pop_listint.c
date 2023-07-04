#include "lists.h"

/**
 * pop_listint - the head is deleted node of a LL
 * @head: it’s a pointer to the first element in the LL
 *
 * Return: data inside elements deleted;
 * or 0 if the list empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (num);
}
