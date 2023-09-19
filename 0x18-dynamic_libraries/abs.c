#include "main.h"
#include <stdio.h>

/**
 * _abs - the absolute value of a char
 * @n: the char
 * Return: an integer
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
