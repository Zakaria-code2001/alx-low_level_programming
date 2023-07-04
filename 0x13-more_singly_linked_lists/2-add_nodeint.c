#include "lists.h"
/**
 * add_nodeint - it add a node at the beginning of a linked list
 * @head: it points to the first node in the list
 * @n: it is the data to be inserted in new node
 *
 * Return:A Pointer to the new node, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
