#include "main.h"

/**
 * flip_bits - count num of Bits to be changed
 * get from one num to other one
 * @n: first n°
 * @m: second n°
 *
 * Return: n° of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, set = 0;
	unsigned long int currently;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		currently = exclusive >> j;
		if (currently & 1)
			set++;
	}

	return (set);
}
