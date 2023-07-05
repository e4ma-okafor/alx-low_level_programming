#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @c: character to be located
 * @s: string to be looked at
 * Return: pointer to first occurance
 * of character
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
