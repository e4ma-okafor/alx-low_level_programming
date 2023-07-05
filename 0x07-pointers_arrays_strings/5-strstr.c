#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to be searched
 * @needle: substring to be looked for
 * Return: pointer to the beginning
 * of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	for (; *haystack != '\0'; )
	{
		bhaystack = haystack;
		pneedle = needle;

		for (; *haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle; )
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
