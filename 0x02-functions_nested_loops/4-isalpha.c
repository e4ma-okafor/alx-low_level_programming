#include "main.h"

/**
 *  _isalpha - Checks for alphabets
 *  @c: The haracter to be checked
 *  Return: 1 for alphabets or 0 for anything else
 */

int  _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
