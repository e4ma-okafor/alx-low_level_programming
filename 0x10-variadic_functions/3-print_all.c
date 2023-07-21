#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list vas;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char the_arg[] = "cifs";

	va_start(vas, format);
	while (format && format[i])
	{
		j = 0;
		while (the_arg[j])
		{
			if (format[i] == the_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(vas, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(vas, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(vas, double)), c = 1;
			break;
		case 's':
			str = va_arg(vas, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n");
	va_end(vas);
}
