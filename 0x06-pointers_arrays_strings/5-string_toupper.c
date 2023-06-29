#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase.
 * @s: the string to be changed
 * Return: uppercase letters of s.
 */

char *string_toupper(char *s)
{
	int count = 0;

	for (; *(s + count) != '\0' ;)
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
}
