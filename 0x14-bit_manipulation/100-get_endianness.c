#include "main.h"

/**
 * get_endianness - see if a machine is little or not
 * Return: 0 Big, 1 Little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}
