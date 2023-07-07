#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - checks for uppercase letters
 * @c: the letter to be checked
 * Return: the letter
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
