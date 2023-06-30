#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: result of the encoded string
 */

char *rot13(char *s)
{
	int count = 0, n;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (n = 0; n < 52; n++)
		{
			if (*(s + count) == alphabet[n])
			{
				*(s + count) = rot13[n];
				break;
			}
		}
		count++;
	}

	return (s);
}
