#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - prints string char
 * @s: string
 * @c: character
 * Return: the result
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
