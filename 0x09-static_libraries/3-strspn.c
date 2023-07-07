#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - the function
 * @s: the string
 * @accept: for the string
 * Return: the result
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
