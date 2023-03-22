#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - is a function that prints a name
 * @name: is a  pointer to a character string
 * @f: is a pointer to a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
