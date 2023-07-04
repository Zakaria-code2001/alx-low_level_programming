#include "lists.h"

/**
 * get_nodeint_at_index - Returns node at  certain index in a LL
 * @head: First Node  The LL
 * @index: Index of  Node to be returned
 *
 * Return: the pointer to  node we're searching for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}
