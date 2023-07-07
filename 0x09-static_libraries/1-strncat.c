#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - adds string n times
 * @src: string 1
 * @dest: the destination
 * @n: number of times
 * Return: the result
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
