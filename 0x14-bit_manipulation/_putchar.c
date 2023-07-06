#include "main.h"
#include <unistd.h>
/**
 * _putchar -Write char c to stdout library
 * @c: the char to be  printed 
 *
 * Return: Success 1.
 * Error, -1, errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
