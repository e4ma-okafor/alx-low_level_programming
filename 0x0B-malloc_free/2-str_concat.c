#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to newly allocated space in memory which
 * contains the contents of s1 followed by the contents of s2,
 * and null terminated or null on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *strdest;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strdest = malloc(sizeof(char) * (i + j + 1));

	if (strdest == NULL)
	{
		free(strdest);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		strdest[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strdest[k] = s2[j];

	return (strdest);
}
