#include <stdio.h>
#include "main.h"

/**
 * main - print  number of arguments passed to  program
 * @argc: number Of arguments
 * @argv: array Of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
