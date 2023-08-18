#include "lists.h"

/**
 * print_dlistint - PrInTs aLl tHe elEMents oF a Dlistint_t liSt.
 * @h: pointEr to thE heAd of thE liSt
 *
 * Return: num of NoDes
 */

size_t print_dlistint(const dlistint_t *h)
{

	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
