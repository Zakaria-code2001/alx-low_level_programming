#include "main.h"

/**
 * clear_bit - set bit value to 0
 * @n: point to the num to Change
 * @index: index of BIt
 *
 * Return: 1 Success, -1 Failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
