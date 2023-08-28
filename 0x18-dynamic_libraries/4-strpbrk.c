#include "main.h"

/**
 * _strpbrk - searches for any of a set of bytes.
 * @s: pointer to string.
 * @accept: pointer to string to be matched
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i, j;

	p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (p);
}
