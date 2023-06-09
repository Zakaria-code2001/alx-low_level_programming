#include "main.h"
/**
 *_memcpy - A Function That Copies Memory Area
 *@dest: Memory Where is Stored
 *@src: Memory Where Is Copied
 *@n: number of bytes
 *
 *Return: copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
