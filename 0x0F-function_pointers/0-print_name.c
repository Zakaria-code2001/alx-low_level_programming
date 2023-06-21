#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print a name using the pointer to a function
 * @name: a string to add
 * @f: a pointer to a function
 * Return: zero
 **/
void print_name(char *name, void (*f)(char *))
	{
		if (name == NULL || f == NULL)
			return;


		f(name);
	}
