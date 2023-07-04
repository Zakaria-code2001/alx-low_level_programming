#include "lists.h"

/**
 * sum_listint - Sum of all the Data in  listint_t L
 * @head: first node in LL
 *
 * Return: result of sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *temp = head;

	while (temp)
	{
		s += temp->n;
		temp = temp->next;
	}

	return (s);
}
