#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - copies the memory of string
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: the memory copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
