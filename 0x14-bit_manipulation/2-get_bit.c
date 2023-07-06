#include "main.h"
/**
 * get_bit - return val of  bit at index in decimal num
 * @n: number we are searching for
 * @index: the current index of bit
 *
 * Return: Value of Bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
