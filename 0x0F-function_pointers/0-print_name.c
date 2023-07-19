#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @f: function pointers
 * @name: input name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
