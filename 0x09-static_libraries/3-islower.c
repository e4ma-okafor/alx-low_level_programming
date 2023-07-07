#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - checks for lowercase letter
 * @c: letter to be checked
 * Return: the letters
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
