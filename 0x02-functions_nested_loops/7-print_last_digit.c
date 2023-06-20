#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @a: The number to be checked
 * Return: Value of the last digit of a number
 */

int print_last_digit(int a)
{
	int num;

	num = a % 10;
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');
	return (num);
}
