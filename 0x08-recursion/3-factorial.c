#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: the number whose factorial is returned
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
