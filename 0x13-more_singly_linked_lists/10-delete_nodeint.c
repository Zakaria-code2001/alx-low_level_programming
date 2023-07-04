#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in a LL at index
 * @head: points to the first element in the L
 * @index: Index of the node to be deletet
 *
 * Return: 1 (Success), or -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tem || !(tem->next))
			return (-1);
		tem = tem->next;
		i++;
	}


	current = tem->next;
	tem->next = current->next;
	free(current);

	return (1);
}
