#include "lists.h"

/**
 * add_nodeint_end - it adds a node in the end of a LL
 * @head: it points to the first element in the L
 * @n: its the data inserted in the new Element
 *
 * Return: a  pointer to the new node, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
