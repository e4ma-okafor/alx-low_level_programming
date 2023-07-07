#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - returns string string
 * @haystack: the first
 * @needle: the second
 * Return: the result
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
