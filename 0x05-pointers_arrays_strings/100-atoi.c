#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The pointer to be converted
 * Return: An integer
 */

int _atoi(char *s)
{
	short boolean;
	int i, min, res;

	i = min = res = boolean = 0;
	min = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			min *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	res *= min;
	return (res);
}
