#include "main.h"

/**
 * _memcpy - copies memory area.
 * @src: memory are to be copied
 * @dest: destination memory area
 * @n: bytes from memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
