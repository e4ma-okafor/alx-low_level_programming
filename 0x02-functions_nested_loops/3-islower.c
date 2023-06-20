#include "main.h"

/**
 * int _islower - Checks for lowercase character
 * Retrun: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
{

	if (c >= 'a' && c<= 'z')
	{
		return (1);
	}
	return (0);
}

