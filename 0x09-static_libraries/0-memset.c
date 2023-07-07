#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - sets the memory of a string
 * @s: the string
 * @b: bytes
 * @n: number of bytes
 * Return: the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
