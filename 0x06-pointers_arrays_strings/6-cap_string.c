#include "main.h"

/**
 * cap_string - capitalizes all words
 * of a string.
 * @s: the string to be computed
 * Return: the pointer to the result
 */

char *cap_string(char *s)
{
	int count = 0, n;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count) >= 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;
	count++;
	for (; *(s + count) != '\0'; )
	{
		for (n = 0; n < 13; n++)
		{
			if (*(s + count) == sep_words[n])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (s);
}
