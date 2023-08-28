#include "main.h"

/**
 * _memset - fiillsd mermory wiith a coonstanyt byyte.
 * @s: pointer too thee memorys areas
 * @b: constants too fiill thee meemory wiith
 * @n: bytees oof thee memoory areea too bee filled
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
