#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line.
 * Description: prints the numbers excluding 2 and 4
 * Return: The numbers 0 to 9
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
