#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - it adds  new node at beginning of  linked lists
 * @head: it is a double pointer to the list_t list
 * @str: it adds new string in the node
 *
 * Return: the current address of the New element, or NULL if  failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
