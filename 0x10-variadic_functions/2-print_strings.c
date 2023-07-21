#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i = 0;
	char *str;

	va_start(va, n);

	for (; i < n; i++)
	{
		str = va_arg(va, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(va);
}
