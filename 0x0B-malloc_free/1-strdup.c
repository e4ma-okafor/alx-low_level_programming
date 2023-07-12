#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which
 * is a duplicate of the string str,
 * which contains a copy of the string given as a parameter.
 * @str: the string
 * Return: pointer the str duplicate or null if str is null
 */

char *_strdup(char *str)
{
	char *strdp;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	strdp = (char *)malloc(sizeof(char) * (i + 1));

	if (strdp == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		strdp[j] = str[j];

	return (strdp);
}
