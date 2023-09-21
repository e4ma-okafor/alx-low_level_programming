#include "main.h"
#include <stdio.h>

/**
 * add - Adds two integers and returns
 * the result.
 *
 * @a: number one.
 * @b: number two.
 *
 * Return: Add of number one and number two.
 */
int add(int a, int b)
{
	return (a + b);
}


/**
 * mul - multiplies two integers.
 * @a: first number.
 * @b: second number.
 * Return: multiplication.
 */
int mul(int a, int b)
{
	return (a * b);
}


/**
 * sub - subtracts two integers and returns
 * the result.
 *
 * @a: number one.
 * @b: number two.
 *
 * Return: Subtract number one from number two.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * div - divides one number with another
 * @a: numerator
 * @b: denominator
 *
 * Return: the result
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	} else 
	{
		return 0;
	}
}


/**
 * mod - modulus of two integers and returns
 * the result.
 *
 * @a: number one.
 * @b: number two.
 *
 * Return: modulus operation of number one and number two.
 */
int mod(int a, int b)
{
	return (a % b);
}
