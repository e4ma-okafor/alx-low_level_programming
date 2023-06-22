#include "main.h"

/**
 * _isupper - Check if the letter is upper
 *  @c: The letter to be checked
 *  Return: 1 if upper or 0 if anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
