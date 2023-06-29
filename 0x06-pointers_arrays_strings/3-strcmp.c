#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: the second string
 * Return: 0 if s1 and s2 are equals,
 * another value if not.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, re = 0;

	for (; re == 0;)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		re = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (re);
}
