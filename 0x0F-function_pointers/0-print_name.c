#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Print Name Using Pointer Po Function
 * @name: String To Add
 * @f: Pointer To Function
 * Return: Nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
