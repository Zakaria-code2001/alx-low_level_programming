#include "main.h"

/**
 * print_binary - it print the binary of  decimal num
 * @n: num to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int j, check = 0;
	unsigned long int currently;

	for (j = 63; j >= 0; j--)
	{
		currently = n >> j;

		if (currently & 1)
		{
			_putchar('1');
			check++;
		}
		else if (check)
			_putchar('0');
	}
	if (!check)
		_putchar('0');
}
