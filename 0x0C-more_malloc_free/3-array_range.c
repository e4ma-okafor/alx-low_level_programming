#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: array range start value
 * @max: array range end value
 * Return: pointer to the newly created array or null if it fails
 */

int *array_range(int min, int max)
{
	int *new_array;
	int diff, i = 0;

	if (min > max)
	{
		return (NULL);
	}

	diff = max - min;
	new_array = malloc((diff + 1) * sizeof(int));

	if (new_array == NULL)
	{
		return (NULL);
	}

	while (i <= diff)
	{
		i++;
		new_array[i] = min++;
	}

	return (new_array);
}
