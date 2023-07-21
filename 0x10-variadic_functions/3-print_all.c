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
	char *str;
	int i = 0;

	va_start(vas, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(vas, int));
				break;
			case 'i':
				printf("%d", va_arg(vas, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(vas, double));
				break;
			case 's':
				str = va_arg(vas, char*);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	va_end(vas);
	printf("\n");
}
